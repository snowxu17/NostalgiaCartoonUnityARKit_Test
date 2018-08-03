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

        //GameObject childObject;

        public Button scanButton;
        public Button placeButton;
        public Dropdown s_dropdown;

        bool isDetecting = false;

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
            placeButton.onClick.AddListener(PlaceWhenHitButton);            

            isDetecting = true;           
        }

        public void PlaceWhenHitButton()
        {
            foreach (Transform child in gameObject.transform)
            {               
                //Debug.Log(placeButton.name + " is pressed!");
                if (child.gameObject.GetComponent<LeanSelectable>().IsSelected == true)
                {
                    child.gameObject.GetComponent<LeanSelectable>().Deselect();
                }
            }
        }

        /*
        public void PlaceWhenDeselected()
        {
            foreach (Transform child in gameObject.transform)
            {
                if (child.gameObject.GetComponent<LeanSelectable>().IsSelected == false)
                {
                    DropSingleObject();
                }
            }
        }

        
        public void DropSingleObject()
        {
            foreach (Transform child in gameObject.transform)
            {
                //Debug.Log("debug:" + child.gameObject.name);
                child.gameObject.GetComponent<LeanRotate>().enabled = false;
                child.gameObject.GetComponent<LeanTranslate>().enabled = false;
                child.gameObject.GetComponent<LeanScale>().enabled = false;
            }
        }
        */

        public void TransformSingleObject()
        {            
            if (isDetecting == false)
            {            
                foreach (Transform child in gameObject.transform)
                {                   
                    Debug.Log("debug:" + child.gameObject.name);
                    child.gameObject.GetComponent<LeanRotate>().enabled = true;
                    child.gameObject.GetComponent<LeanTranslate>().enabled = true;
                    child.gameObject.GetComponent<LeanScale>().enabled = true;
                    
                }
            }            
        }

        private void DeselectOnTimeChange()
        {            
            if (s_dropdown.isActiveAndEnabled == true)
            {
                foreach (Transform child in gameObject.transform)
                {
                    child.gameObject.GetComponent<LeanSelectable>().enabled = false;
                }
            }

            if (s_dropdown.isActiveAndEnabled == false)
            {
                foreach (Transform child in gameObject.transform)
                {
                    child.gameObject.GetComponent<LeanSelectable>().enabled = true;
                }
            }          
        }

        public void DetectionOff()
        {            
            isDetecting = false;
            Debug.Log("Plane detection off!");                               
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
                }
            }
        }


        void Update()
        {
            if (scanButton.isActiveAndEnabled == true)
            {
                foreach (Transform child in gameObject.transform)
                {
                    child.gameObject.GetComponent<LeanSelectable>().enabled = false;
                }
            }
                              
            if (scanButton.isActiveAndEnabled == false)
            {                                           
                //PlaceWhenDeselected();
                DeselectOnTimeChange();

                if (isDetecting == true)
                {
                    //childObject.GetComponent<LeanSelectable>().enabled = false;

                    foreach (Transform child in gameObject.transform)
                    {
                        child.gameObject.GetComponent<LeanSelectable>().enabled = false;
                    }

                    ARPlaceObjectsOnPlane();
                }                         

                if (isDetecting == false)
                {
                    //childObject.GetComponent<LeanSelectable>().enabled = true;  // Start to allow object selection and transformation       
                    foreach (Transform child in gameObject.transform)
                    {
                        child.gameObject.GetComponent<LeanSelectable>().enabled = true;                        

                    }
                }
            }
        }
    }
}
