using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class UIManager : MonoBehaviour {

    public Button scanButton;
    public Button placeObjectButton;
    public Button restartButton;
    public Button switchButton;
    public Button detectButton;
    public Dropdown s_Dropdown;
    public Dropdown e_Dropdown;
    public Button showDropdown;
    public Button hideDropdown;
    public GameObject pinchGuide;
    public GameObject tapGuide;
    public GameObject tmGuide;

    public float timeLeft = 20.0f;

    int counter = 0;

    private HitTest_Select ht;

    private static UIManager ui;
    public static UIManager Instance()
    {
        if (!ui)
        {
            ui = FindObjectOfType(typeof(UIManager)) as UIManager;
        }
        return ui;
    }

    //for test
    public int plnCt;

    private void Awake ()
    {      
        scanButton.onClick.AddListener(SetWorldOrigin);

        showDropdown.onClick.AddListener(ShowTimeUI);
        hideDropdown.onClick.AddListener(HideTimeUI);

        ht = HitTest_Select.Instance();

    }

    public void SetWorldOrigin()
    {
        //UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
        scanButton.gameObject.SetActive(false);
    }

    public void ShowTimeUI()
    {
        //// Editor
        showDropdown.gameObject.SetActive(false);
        restartButton.gameObject.SetActive(false);
        switchButton.gameObject.SetActive(false);
        s_Dropdown.gameObject.SetActive(true);
        e_Dropdown.gameObject.SetActive(true);

        counter += 1;

        if(counter == 1)
        {
            tmGuide.gameObject.SetActive(true);
        }

    }

    public void HideTimeUI()
    {
        //// Editor
        showDropdown.gameObject.SetActive(true);
        restartButton.gameObject.SetActive(true);
        switchButton.gameObject.SetActive(true);
        s_Dropdown.gameObject.SetActive(false);
        e_Dropdown.gameObject.SetActive(false);
        tmGuide.gameObject.SetActive(false);
    }


    //public static void HideTimeUI(GameObject showDropdown, GameObject restartButton, GameObject switchButton, GameObject s_Dropdown, GameObject e_Dropdown)
    //{
    //    //// Editor
    //    showDropdown.gameObject.SetActive(true);
    //    restartButton.gameObject.SetActive(true);
    //    switchButton.gameObject.SetActive(true);
    //    s_Dropdown.gameObject.SetActive(false);
    //    e_Dropdown.gameObject.SetActive(false);
    //}

    //public void OnClickShowDetectButton()
    //{
    //    detectButton.gameObject.SetActive(true);
    //}

    public void OnClickDestroy(GameObject tapGuide, GameObject pinchGuide)
    {      
        //detectButton.gameObject.SetActive(false);
        tapGuide.SetActive(false);
        pinchGuide.SetActive(true);

    }

    //public void HidePlaceButton()
    //{
    //    placeObjectButton.gameObject.SetActive(false);        
    //}

    void Update ()
    {

        plnCt = ManagerScript.arKitPlaneRenderers.Count;

        timeLeft -= Time.deltaTime;
        //Debug.Log(timeLeft);
        if (timeLeft < 0.0f)
        {
            scanButton.gameObject.SetActive(false);
            timeLeft = 0;
        }

        // Hide UI bottons when reset world orgin button is on        
        if (scanButton.isActiveAndEnabled == true)
        {
            placeObjectButton.gameObject.SetActive(false);
            restartButton.gameObject.SetActive(false);
            switchButton.gameObject.SetActive(false);
            showDropdown.gameObject.SetActive(false);
            //detectButton.gameObject.SetActive(false);
        }
     

        //if(plnCt > 0)
        //{
        //    scanButton.gameObject.SetActive(false);
        //}

        // Show UI bottons after reset button is off
        if (scanButton.isActiveAndEnabled == false)
        {                              
            if (ht.isDetecting == true)
            {
                tapGuide.gameObject.SetActive(true);
                //detectButton.gameObject.SetActive(true);
            }
            
            if (ht.isDetecting == false)
            {                
                OnClickDestroy(tapGuide, pinchGuide);

                if (s_Dropdown.isActiveAndEnabled == false && e_Dropdown.isActiveAndEnabled == false)
                {
                    showDropdown.gameObject.SetActive(true);
                    restartButton.gameObject.SetActive(true);
                    switchButton.gameObject.SetActive(true);

                }

                if (s_Dropdown.isActiveAndEnabled == true && e_Dropdown.isActiveAndEnabled == true)
                {
                    restartButton.gameObject.SetActive(false);
                    switchButton.gameObject.SetActive(false);
                }

            }  
            
        }
    }
}
