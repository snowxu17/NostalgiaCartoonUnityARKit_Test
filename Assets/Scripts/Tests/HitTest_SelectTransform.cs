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

        public Button scanButton;
        public Button placeObjectButton;
        public Button restartButton;
        Button showScrollbar;

        GameObject childObject;
        Rigidbody child_rigidbody;

        bool isDetecting = false;
        bool parentPlaced = false;
        bool childPlaced = false;

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
            //Debug.Log("Accessing child named " + childObject.name);

            scanButton = GameObject.Find("Button_setWorldOrigin").GetComponent<Button>();
            scanButton.onClick.AddListener(SetWorldOrigin);

            placeObjectButton = GameObject.Find("Button_PlaceObject").GetComponent<Button>();
            placeObjectButton.onClick.AddListener(PlaceWhenHitButton);

            restartButton = GameObject.Find("Button_Restart").GetComponent<Button>();
            showScrollbar = GameObject.Find("Button_ShowScrollbar").GetComponent<Button>();

        }        

        public void SetWorldOrigin()
        {
            UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
            scanButton.gameObject.SetActive(false);

            //Debug.Log("Camera position = " + Camera.main.transform.position);
            //Debug.Log("Camera rotation = " + Camera.main.transform.rotation);

        }
        

        /*
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
        */

        public void PlaceWhenHitButton()
        {
            Debug.Log(placeObjectButton.name + " is pressed!");

            if (childObject.GetComponent<LeanSelectable>().IsSelected == true)
            {
                // Deselect object
                childObject.GetComponent<LeanSelectable>().Deselect();

                isDetecting = false;
                childPlaced = true;
            }
            // Plane detection off
            //DetectionOff();
        }

        private void PlaceWhenDeselected()
        {
            if (childObject.GetComponent<LeanSelectable>().IsSelected == false)                
            {
                //Debug.Log("Child object " + childObject.name + " is de-selected!");
                DropSingleObject();
            }            
        }

        private void DropSingleObject()
        {
            // Drop object to AR plane and enable gravity
            childObject.GetComponent<Rigidbody>().useGravity = true;
            childObject.GetComponent<Rigidbody>().isKinematic = false;
            //Debug.Log("Child object " + childObject.name + " gravity on!");

            // Disable object tranformation
            childObject.GetComponent<LeanRotate>().enabled = false;
            childObject.GetComponent<LeanTranslate>().enabled = false;
            childObject.GetComponent<LeanScale>().enabled = false;
            //Debug.Log("Child object " + childObject.name + " is de-activated from transformation!");

            // Plane detection off
            //DetectionOff();   
            isDetecting = false;
            childPlaced = true;
        }

        public void TransformSingleObject()
        {
            // Lift object from the AR plane and make it flaot
            childObject.transform.position += Vector3.up * 0.05F;
            child_rigidbody.useGravity = false;
            child_rigidbody.isKinematic = true;
            //Debug.Log("Child object " + childObject.name + " gravity off!");

            // Enable object transform
            //childObject.GetComponent<LeanRotate>().enabled = true;
            childObject.GetComponent<LeanTranslate>().enabled = true;
            childObject.GetComponent<LeanScale>().enabled = true;
            //Debug.Log("Child object " + childObject.name + " is selected and activated for transformation!");

            // Plane detection off
            //DetectionOff();
            isDetecting = false;
            childPlaced = true;
           
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
            if (Input.GetMouseButtonDown(0) && isDetecting == true && !IsPointerOverUIObject())
            {
                //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                Ray ray = Camera.main.ViewportPointToRay(new Vector3 (Camera.main.pixelWidth/2, Camera.main.pixelHeight/2, 0));

                RaycastHit hit;
                
                //we'll try to hit one of the plane collider gameobjects that were generated by the plugin
                //effectively similar to calling HitTest with ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
                if (Physics.Raycast(ray, out hit, maxRayDistance, collisionLayer))
                {
                    parentPlaced = true;

                    if (parentPlaced == true)
                    {
                        //we're going to get the position from the contact point
                        m_HitTransform.position = hit.point;
                        Debug.Log(string.Format("Position x:{0:0.######} y:{1:0.######} z:{2:0.######}",
                                                m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));

                        //and the rotation from the transform of the plane collider
                        m_HitTransform.rotation = hit.transform.rotation;                       

                        parentPlaced = false;
                        isDetecting = false;
                        //DetectionOff();
                    }                    
                }
            }
        }
        

        void Update()
        {
            // Hide UI bottons when reset world orgin
            if (scanButton.isActiveAndEnabled == true)
            {
                placeObjectButton.gameObject.SetActive(false);
                restartButton.gameObject.SetActive(false);
                childObject.GetComponent<LeanSelectable>().enabled = false;

                //showScrollbar.gameObject.SetActive(false);

            }
            // and when not in the state of transform or select
            if (scanButton.isActiveAndEnabled == false)
            {
                childObject.GetComponent<LeanSelectable>().enabled = true;

                // Show UI bottons
                placeObjectButton.gameObject.SetActive(true);
                restartButton.gameObject.SetActive(true);
                
                //showScrollbar.gameObject.SetActive(true);
                

                if (childObject.GetComponent<LeanSelectable>().IsSelected == false && childPlaced == false)
                {
                    isDetecting = true;
                    Debug.Log("Is detecting!");                    

                    ARPlaceObjectsOnPlane();
                }
            }

            PlaceWhenDeselected();

            // Chaneg objects parents later with double tap
           // int tapInterval = GameObject.Find("LeanFingerTap").GetComponent<LeanFingerTap>().RequiredTapInterval = 2;
        }

    }
}