using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Lean.Touch;
using UnityEngine.XR.iOS;

public class ScrollbarController : MonoBehaviour
{
    public Button showScrollbar;
    public Button hideScrollbar;
    public Scrollbar scrollbar;
    public GameObject hitTestObj;

    [Tooltip("Ignore fingers with StartedOverGui?")]
    public bool IgnoreStartedOverGui = false;

    [Tooltip("Ignore fingers with IsOverGui?")]
    public bool IgnoreIsOverGui = false;

    [Tooltip("Allows you to force rotation with a specific amount of fingers (0 = any)")]
    public int RequiredFingerCount;

    [Tooltip("Does scaling require an object to be selected?")]
    public LeanSelectable RequiredSelectable;

    [Tooltip("If you want the mouse wheel to simulate pinching then set the strength of it here")]
    [Range(-1.0f, 1.0f)]
    public float WheelSensitivity;

    [Tooltip("Should the scaling be performanced relative to the finger center?")]
    public bool Relative;

    [Tooltip("Should the scale value be clamped?")]
    public bool ScaleClamp;

    [Tooltip("The minimum scale value on all axes")]
    public Vector3 ScaleMin;

    [Tooltip("The maximum scale value on all axes")]
    public Vector3 ScaleMax;

    float size;

    protected virtual void Start()
    {
        //scrollbar.gameObject.SetActive(false);
        //showScrollbar.onClick.AddListener(ShowTimeUI);
        //hideScrollbar.onClick.AddListener(HideTimeUI);

        Relative = false;
        size = scrollbar.GetComponent<Scrollbar>().size = 0.05f;

        if (RequiredSelectable == null)
        {
            RequiredSelectable = GetComponent<LeanSelectable>();
        }
    }

    protected virtual void ShowTimeUI()
    {
        showScrollbar.gameObject.SetActive(false);
        scrollbar.gameObject.SetActive(true);

        // Hide restart and place obeject UI
        //hitTestObj.GetComponent<HitTest_SelectTransform>().placeObjectButton.gameObject.SetActive(false);
    }

    protected virtual void HideTimeUI()
    {
        showScrollbar.gameObject.SetActive(true);
        scrollbar.gameObject.SetActive(false);

        // Show restart and place obeject UI
        //hitTestObj.GetComponent<HitTest_SelectTransform>().placeObjectButton.gameObject.SetActive(true);

    }

    protected virtual void update()
    {
        /*
        if (hitTestObj.GetComponent<HitTest_SelectTransform>().scanButton.isActiveAndEnabled == true)
        {
            HideTimeUI();
        }
        else
        {
            ShowTimeUI();
        }
        */

        var fingers = LeanSelectable.GetFingersOrClear(IgnoreStartedOverGui, IgnoreIsOverGui, RequiredFingerCount, RequiredSelectable);
        var pinchScale = LeanGesture.GetPinchScale(fingers, WheelSensitivity);

        // Turn off trasnform for obeject when pinch for time bar??

        if (Relative == true)
        {
            //size = 1.0f;
            scrollbar.GetComponent<Scrollbar>().size = 1.0f;
        }

        if (pinchScale > 0.0f)
        {
            pinchScale = Mathf.Clamp(pinchScale, 0, 1);
            //size = size * pinchScale;
            //size = pinchScale;        

            // Perform the translation if this is a relative scale
            /*
            if (Relative == true)
            {
                var pinchScreenCenter = LeanGesture.GetScreenCenter(fingers);                        
            }
            */
            // Perform the scaling
            //Scale(transform.localScale * pinchScale);
        }
        
    }
}
