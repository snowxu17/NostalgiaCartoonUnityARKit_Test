using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class UIManager : MonoBehaviour {

    public Button scanButton;
    public Button placeObjectButton;
    public Button restartButton;

    // Time change related
    public Button showScrollbar;
    public Scrollbar scrollBar;
    public Dropdown s_Dropdown;
    public Dropdown e_Dropdown;

    void Start ()
    {
        scanButton.onClick.AddListener(SetWorldOrigin);      
    }

    public void SetWorldOrigin()
    {
        UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
        scanButton.gameObject.SetActive(false);
    }

    void Update () {
        
        // Hide UI bottons when reset world orgin button is on
        if (scanButton.isActiveAndEnabled == true)
        {
            placeObjectButton.gameObject.SetActive(false);
            restartButton.gameObject.SetActive(false);
            showScrollbar.gameObject.SetActive(false);
        }
     
        // Show UI bottons after reset button is off
        if (scanButton.isActiveAndEnabled == false)
        {                        
            placeObjectButton.gameObject.SetActive(true);
            restartButton.gameObject.SetActive(true);

            if(scrollBar.isActiveAndEnabled == false)
            {
                showScrollbar.gameObject.SetActive(true);
            }
        }
    }
}
