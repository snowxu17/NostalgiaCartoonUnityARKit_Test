using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Lean.Touch;

namespace UnityEngine.XR.iOS
{
    public class HitTest_SelectTransform : MonoBehaviour
    {
        public Transform m_HitTransform;
        public float maxRayDistance = 30.0f;
        public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer

        bool isDetecting;

        Button scanButton;
        Button placeObjectButton;

        GameObject childObject;
        Rigidbody child_rigidbody;


        bool HitTestWithResultType(ARPoint point, ARHitTestResultType resultTypes)
        {
            List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface().HitTest(point, resultTypes);
            if (hitResults.Count > 0)
            {
                foreach (var hitResult in hitResults)
                {
                    Debug.Log("Got hit!");
                    m_HitTransform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
                    m_HitTransform.rotation = UnityARMatrixOps.GetRotation(hitResult.worldTransform);
                    Debug.Log(string.Format("x:{0:0.######} y:{1:0.######} z:{2:0.######}",
                                              m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
                    return true;
                }
            }
            return false;
        }

        public void Start()
        {
            childObject = gameObject.transform.GetChild(1).gameObject;
            child_rigidbody = childObject.GetComponent<Rigidbody>();
            Debug.Log("Accessing child named " + childObject.name);

            scanButton = GameObject.Find("Button_setWorldOrigin").GetComponent<Button>();
            scanButton.onClick.AddListener(SetWorldOrigin);

            placeObjectButton = GameObject.Find("Button_PlaceObject").GetComponent<Button>();
            placeObjectButton.onClick.AddListener(PlaceWhenHitButton);

        }

        public void SetWorldOrigin()
        {
            UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
            scanButton.gameObject.SetActive(false);

            Debug.Log("Camera position = " + Camera.main.transform.position);
            Debug.Log("Camera rotation = " + Camera.main.transform.rotation);

        }

        public void DetectionOff()
        {
            if (isDetecting == true)
            {
                isDetecting = false;
                Debug.Log("Plane detection off!");
            }                      
        }

        public void DetectionOn()
        {
            if (isDetecting == false)
            {
                isDetecting = true;
                Debug.Log("Plane detection on!");
            }
        }

        public void PlaceWhenHitButton()
        {
            Debug.Log(placeObjectButton.name + " is pressed!");

            if (childObject.GetComponent<LeanSelectable>().IsSelected == true)
            {
                // Deselect object
                childObject.GetComponent<LeanSelectable>().Deselect();
            }
            // Plane detection off
            DetectionOff(); 
        }

        private void PlaceWhenDeselected()
        {
            if (childObject.GetComponent<LeanSelectable>().IsSelected == false)                
            {
                Debug.Log("Child object " + childObject.name + " is de-selected!");
                DropSingleObject();
            }
            // Plane detection off
            DetectionOff();        
        }

        private void DropSingleObject()
        {
            // Drop object to AR plane and enable gravity
            childObject.GetComponent<Rigidbody>().useGravity = true;
            childObject.GetComponent<Rigidbody>().isKinematic = false;
            Debug.Log("Child object " + childObject.name + " gravity on!");

            // Disable object tranformation
            childObject.GetComponent<LeanRotate>().enabled = false;
            childObject.GetComponent<LeanTranslate>().enabled = false;
            childObject.GetComponent<LeanScale>().enabled = false;
            Debug.Log("Child object " + childObject.name + " is de-activated from transformation!");

            // Plane detection off
            DetectionOff();   
        }

        public void TransformSingleObject()
        {
            // Lift object from the AR plane and make it flaot
            childObject.transform.position += Vector3.up * 0.05F;
            child_rigidbody.useGravity = false;
            child_rigidbody.isKinematic = true;
            Debug.Log("Child object " + childObject.name + " gravity off!");

            // Enable object transform
            childObject.GetComponent<LeanRotate>().enabled = true;
            childObject.GetComponent<LeanTranslate>().enabled = true;
            childObject.GetComponent<LeanScale>().enabled = true;
            Debug.Log("Child object " + childObject.name + " is selected and activated for transformation!");

            // Plane detection on
            DetectionOff();
        }

        private bool IsPointerOverUIObject()
        {
            PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
            eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
            return results.Count > 0;
        }


        public void ARPlaceObjectsOnPlane()
        {
            #if UNITY_EDITOR   //we will only use this script on the editor side, though there is nothing that would prevent it from working on device
            if (Input.GetMouseButtonDown(0) && isDetecting == true && !IsPointerOverUIObject())
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                //Ray ray = Camera.main.ViewportPointToRay(new Vector3 (Camera.main.pixelWidth/2, Camera.main.pixelHeight/2, 0));

                RaycastHit hit;

                //we'll try to hit one of the plane collider gameobjects that were generated by the plugin
                //effectively similar to calling HitTest with ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
                if (Physics.Raycast(ray, out hit, maxRayDistance, collisionLayer))
                {
                    //we're going to get the position from the contact point
                    m_HitTransform.position = hit.point;
                    Debug.Log(string.Format("x:{0:0.######} y:{1:0.######} z:{2:0.######}",
                                            m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));

                    //and the rotation from the transform of the plane collider
                    m_HitTransform.rotation = hit.transform.rotation;
                }

            }


            #else
            if (Input.touchCount > 0 && m_HitTransform != null && isDetecting == true && !IsPointerOverUIObject())
            {
                var touch = Input.GetTouch(0);
                if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
                {
                    var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
                    //var screenPosition = Camera.main.ScreenToViewportPoint(new Vector3 (Camera.main.pixelWidth/2, Camera.main.pixelHeight/2, 0));

                    ARPoint point = new ARPoint {
                        x = screenPosition.x,
                        y = screenPosition.y
                    };

                    // prioritize reults types
                    ARHitTestResultType[] resultTypes = {
                        //ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingGeometry,
                        ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
                        // if you want to use infinite planes use this:
                        //ARHitTestResultType.ARHitTestResultTypeExistingPlane,
                        //ARHitTestResultType.ARHitTestResultTypeEstimatedHorizontalPlane, 
                        //ARHitTestResultType.ARHitTestResultTypeEstimatedVerticalPlane, 
                        //ARHitTestResultType.ARHitTestResultTypeFeaturePoint
                    }; 
                    
                    foreach (ARHitTestResultType resultType in resultTypes)
                    {
                        if (HitTestWithResultType (point, resultType))
                        {
                            return;
                        }
                    }
                }
            }

        #endif
        }


        void Update()
        {
            // Start plane detection only after setting world origin
            if (scanButton.isActiveAndEnabled == false)
            {
                isDetecting = true;
                Debug.Log("Start dectecting AR plane!");

                // Raycast to place objects parent on AR plane
                ARPlaceObjectsOnPlane();
            }

            PlaceWhenDeselected();

            // Chaneg objects parents later with double tap
           // int tapInterval = GameObject.Find("LeanFingerTap").GetComponent<LeanFingerTap>().RequiredTapInterval = 2;

        }

    }
}

