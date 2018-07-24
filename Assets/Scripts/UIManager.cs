using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class UIManager : MonoBehaviour {

    GameObject parentObject;
    GameObject childObject;

    public Button scanButton;
    public Button placeObjectButton;
    public Button restartButton;
    public Button showScrollbar;
    public Scrollbar scrollBar;

    void Start ()
    {
        /*parentObject = GameObject.Find("HitCubeParent");

        for ( int i = 0; i < gameObject.transform.childCount; i++)
        {
            childObject = gameObject.transform.GetChild(i).GetChild(1).gameObject;
            Debug.Log("Accessing child obejct :" + childObject.name);
        }
        */

        scanButton.onClick.AddListener(SetWorldOrigin);      
    }

    public void SetWorldOrigin()
    {
        UnityARSessionNativeInterface.GetARSessionNativeInterface().SetWorldOrigin(Camera.main.transform);
        scanButton.gameObject.SetActive(false);
    }

    void Update () {
        
        // Hide UI bottons when reset world orgin
        if (scanButton.isActiveAndEnabled == true)
        {
            placeObjectButton.gameObject.SetActive(false);
            restartButton.gameObject.SetActive(false);
            showScrollbar.gameObject.SetActive(false);

            //childObject.GetComponent<LeanSelectable>().enabled = false;
        }
     
        if (scanButton.isActiveAndEnabled == false)
        {
            //childObject.GetComponent<LeanSelectable>().enabled = true;
            
            // Show UI bottons
            placeObjectButton.gameObject.SetActive(true);
            restartButton.gameObject.SetActive(true);

            if (scrollBar.isActiveAndEnabled == false)
            {
                //showScrollbar.gameObject.SetActive(true);
            }

        }

}
}
