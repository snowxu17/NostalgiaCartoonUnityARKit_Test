using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Lean.Touch;


public class ScrollbarController : MonoBehaviour
{
    public LeanScale ls;        

    public Button showScrollbar;
    public Button hideScrollbar;
    public Scrollbar scrollbar;
    public GameObject hitTestObj;

    public float perspectiveZoomSpeed = 0.5f;
    public float zoomSpeed = 0.5f;
    public bool timeChange;

    protected virtual void Start()
    {
        ls = FindObjectOfType(typeof(LeanScale)) as LeanScale;

        scrollbar.gameObject.SetActive(false);

        showScrollbar.onClick.AddListener(ShowTimeUI);
        hideScrollbar.onClick.AddListener(HideTimeUI);

        scrollbar.GetComponent<Scrollbar>().size = 0.05f;

        timeChange = false;
    }

    protected virtual void ShowTimeUI()
    {
        showScrollbar.gameObject.SetActive(false);
        scrollbar.gameObject.SetActive(true);
    }

    protected virtual void HideTimeUI()
    {
        showScrollbar.gameObject.SetActive(true);
        scrollbar.gameObject.SetActive(false);
    }

    public virtual void Update()
    {       
        /*
        var fingers = LeanSelectable.GetFingersOrClear(ls.IgnoreStartedOverGui, ls.IgnoreIsOverGui, ls.RequiredFingerCount, ls.RequiredSelectable);
        var pinchScale = LeanGesture.GetPinchScale(fingers, ls.WheelSensitivity);

        Mathf.Lerp(0.0f, 1.0f, (pinchScale - 0.9f) / (1.0f - 0.9f));           
        scrollbar.GetComponent<Scrollbar>().size = pinchScale;
        Debug.Log("Pinch Scaleeeee : " + pinchScale);
        */


        if (Input.touchCount == 2)
        {
            // Store both touches.
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            // Find the position in the previous frame of each touch.
            Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

            // Find the magnitude of the vector (the distance) between the touches in each frame.
            float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

            // Find the difference in the distances between each frame.
            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            //// pseudo code: if scrollbar is selected and transform for other objects are turned off
            if (scrollbar.isActiveAndEnabled == true)
            {
                timeChange = true;

                scrollbar.GetComponent<Scrollbar>().size += deltaMagnitudeDiff * zoomSpeed;
                scrollbar.GetComponent<Scrollbar>().size = Mathf.Max(scrollbar.GetComponent<Scrollbar>().size, 0.1f);
            }

            else
            {
                timeChange = false;
            }
        }
    }
}
