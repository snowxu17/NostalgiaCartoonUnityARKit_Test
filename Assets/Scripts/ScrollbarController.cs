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

    public float map;

    protected virtual void Start()
    {
        Relative = false;
        scrollbar.gameObject.SetActive(false);

        showScrollbar.onClick.AddListener(ShowTimeUI);
        hideScrollbar.onClick.AddListener(HideTimeUI);

        scrollbar.GetComponent<Scrollbar>().size = 0.05f;

        if (RequiredSelectable == null)
        {
            RequiredSelectable = GetComponent<LeanSelectable>();
        }
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

    public void Update()
    {
        var fingers = LeanSelectable.GetFingersOrClear(IgnoreStartedOverGui, IgnoreIsOverGui, RequiredFingerCount, RequiredSelectable);
        var pinchScale = LeanGesture.GetPinchScale(fingers, WheelSensitivity);

        //if (pinchScale > 0.0f)
        //{           

            Mathf.Lerp(0.0f, 1.0f, (pinchScale - 0.9f) / (1.0f - 0.9f));
            Debug.Log("Pinch Scaleeeee : " + pinchScale);
            scrollbar.GetComponent<Scrollbar>().size = pinchScale;                   
        //}
        
    }
}
