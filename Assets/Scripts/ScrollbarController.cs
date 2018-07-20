using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Lean.Touch;

public class ScrollbarController : MonoBehaviour
{
    public Button showScrollbar;
    public Button hideScrollbar;
    public Scrollbar scrollbar;

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
        scrollbar.gameObject.SetActive(false);
        showScrollbar.onClick.AddListener(ShowTimeUI);
        hideScrollbar.onClick.AddListener(HideTimeUI);

        Relative = true;
        size = scrollbar.GetComponent<Scrollbar>().size = 0.04f;

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

    protected virtual void update()
    {
        var fingers = LeanSelectable.GetFingersOrClear(IgnoreStartedOverGui, IgnoreIsOverGui, RequiredFingerCount, RequiredSelectable);
        var pinchScale = LeanGesture.GetPinchScale(fingers, WheelSensitivity);

        // Turn off trasnform for obeject when pinch for time bar??

        size = size * pinchScale;

        /*if (pinchScale > 0.0f)
        {
            // Perform the translation if this is a relative scale
            if (Relative == true)
            {
                var pinchScreenCenter = LeanGesture.GetScreenCenter(fingers);                        
            }

            // Perform the scaling
            Scale(transform.localScale * pinchScale);
        }
        */
    }
}
