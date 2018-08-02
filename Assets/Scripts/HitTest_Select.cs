using System;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Lean.Touch;

namespace UnityEngine.XR.iOS
{
    public class HitTest_Select : MonoBehaviour
    {
        public Transform m_HitTransform;
        public float maxRayDistance = 30.0f;
        public LayerMask collisionLayer = 1 << 10;  //ARKitPlane layer

        GameObject childObject;
        Rigidbody child_rigidbody;
        GameObject scanMock;

        Transform objectHit;

        Button scanButton;
        Button placeButton;
        public Dropdown s_dropdown;

        bool isDetecting = false;
        bool parentPlaced = false;        

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
            childObject = gameObject.transform.GetChild(0).gameObject;
            child_rigidbody = childObject.GetComponent<Rigidbody>();
            Debug.Log("Accessing child: " + childObject.name);

            scanButton = GameObject.Find("Button_setWorldOrigin").GetComponent<Button>();

            placeButton = GameObject.Find("Button_PlaceObject").GetComponent<Button>();
            placeButton.onClick.AddListener(PlaceWhenHitButton);

            scanMock = GameObject.Find("ShortTable 1").gameObject;
        }

        public void PlaceWhenHitButton()
        {
            //Debug.Log(placeButton.name + " is pressed!");
            if (childObject.GetComponent<LeanSelectable>().IsSelected == true)
            {
                childObject.GetComponent<LeanSelectable>().Deselect();
            }
        }

        public void PlaceWhenDeselected()
        {            
            if (childObject.GetComponent<LeanSelectable>().IsSelected == false)
            {
                DropSingleObject();
            }
        }

        public void DropSingleObject()
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
        }

        public void TransformSingleObject()
        {
            //if (parentPlaced == true && isDetecting)
            //{
                // Lift object from the AR plane and make it flaot
                childObject.transform.position += Vector3.up * 0.05F;
                child_rigidbody.useGravity = false;
                child_rigidbody.isKinematic = true;
                //Debug.Log("Child object " + childObject.name + " gravity off!");

                // Enable object transform
                childObject.GetComponent<LeanRotate>().enabled = true;
                childObject.GetComponent<LeanTranslate>().enabled = true;
                childObject.GetComponent<LeanScale>().enabled = true;
                //Debug.Log("Child object " + childObject.name + " is selected and activated for transformation!");                                          
            //}
        }

        private void DeselectOnTimeChange()
        {
            // Only enable selectable for scene objects when not changing time
            if (s_dropdown.isActiveAndEnabled == true)
            {
                childObject.GetComponent<LeanSelectable>().enabled = false;
                isDetecting = false;
            }

            if (s_dropdown.isActiveAndEnabled == false)
            {
                childObject.GetComponent<LeanSelectable>().enabled = true;
            }          
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
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                //Ray ray = Camera.main.ViewportPointToRay(new Vector3(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2, 0));

                RaycastHit hit;

                //we'll try to hit one of the plane collider gameobjects that were generated by the plugin
                //effectively similar to calling HitTest with ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent
                if (Physics.Raycast(ray, out hit, maxRayDistance, collisionLayer))
                {

                    //we're going to get the position from the contact point
                    m_HitTransform.position = hit.point;
                    Debug.Log(string.Format("Position x:{0:0.######} y:{1:0.######} z:{2:0.######}",
                                            m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));

                    //and the rotation from the transform of the plane collider
                    m_HitTransform.rotation = hit.transform.rotation;

                    objectHit = hit.transform;

                }
            }

            //parentPlaced = true;
            //isDetecting = false;
        }


        void Update()
        {
            if (scanButton.isActiveAndEnabled == true)
            {
                childObject.GetComponent<LeanSelectable>().enabled = false;
                isDetecting = false;
            }
                              
            if (scanButton.isActiveAndEnabled == false)
            {                                           
                PlaceWhenDeselected();
                DeselectOnTimeChange();
                
                if (parentPlaced == false)
                {
                    childObject.GetComponent<LeanSelectable>().enabled = false;
                    isDetecting = true;   //detect ar plane                 

                    ARPlaceObjectsOnPlane();
                    parentPlaced = true;
                    isDetecting = false; // stop detect ar plane detecion
                } 
                
                if(parentPlaced == true && isDetecting == false)
                {
                    //isDetecting = false; 
                    childObject.GetComponent<LeanSelectable>().enabled = true;  // Start to allow object selection and transformation                       
                }
            }
        }
    }
}
