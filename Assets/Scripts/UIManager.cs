using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class UIManager : MonoBehaviour {

    public Button scanButton;
    public Button placeObjectButton;
    public Button restartButton;
    public Button detectButton;
    public Dropdown s_Dropdown;
    public Dropdown e_Dropdown;
    public Button showDropdown;
    public Button hideDropdown;

    float timeLeft = 7.0f;

    private void Awake ()
    {
        scanButton.onClick.AddListener(SetWorldOrigin);

        s_Dropdown.gameObject.SetActive(false);
        e_Dropdown.gameObject.SetActive(false);

        showDropdown.onClick.AddListener(ShowTimeUI);
        hideDropdown.onClick.AddListener(HideTimeUI);
    }

    public void SetWorldOrigin()
    {
        UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
        scanButton.gameObject.SetActive(false);
    }

    private void ShowTimeUI()
    {
        showDropdown.gameObject.SetActive(false);
        s_Dropdown.gameObject.SetActive(true);
        e_Dropdown.gameObject.SetActive(true); 
    }

    private void HideTimeUI()
    {
        showDropdown.gameObject.SetActive(true);
        s_Dropdown.gameObject.SetActive(false);
        e_Dropdown.gameObject.SetActive(false);
    }

    public void OnClickShow()
    {
        detectButton.gameObject.SetActive(true);
    }

    public void OnClickDestroy()
    {      
        detectButton.gameObject.SetActive(false);
    }

    void Update ()
    {       
        // Hide UI bottons when reset world orgin button is on        
        if (scanButton.isActiveAndEnabled == true)
        {
            placeObjectButton.gameObject.SetActive(false);
            restartButton.gameObject.SetActive(false);
            showDropdown.gameObject.SetActive(false);
            detectButton.gameObject.SetActive(false);
        }
     
        // Show UI bottons after reset button is off
        if (scanButton.isActiveAndEnabled == false)
        {                        
            placeObjectButton.gameObject.SetActive(true);
            restartButton.gameObject.SetActive(true);

            //detectButton.gameObject.SetActive(true);

            if (s_Dropdown.isActiveAndEnabled == false && e_Dropdown.isActiveAndEnabled == false)
            {
                showDropdown.gameObject.SetActive(true);
            }

            if (s_Dropdown.isActiveAndEnabled == true && e_Dropdown.isActiveAndEnabled == true)
            {
                restartButton.gameObject.SetActive(false);
                placeObjectButton.gameObject.SetActive(false);
            }
        }
    }
}
