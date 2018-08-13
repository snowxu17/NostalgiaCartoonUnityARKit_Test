using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowPlane : MonoBehaviour {

    public GameObject shadowPlane;
    public GameObject wall1;
    public GameObject wall2;

    public void Awake()
    {        
        shadowPlane.GetComponent<MeshRenderer>().enabled = false;
        wall1.GetComponent<MeshRenderer>().enabled = false;
        wall2.GetComponent<MeshRenderer>().enabled = false;
    }

    public static void ShowShadowPlane(GameObject shadowPlane, GameObject wall1, GameObject wall2)
    {
        Debug.Log("Shadow plane on!");
        shadowPlane.GetComponent<MeshRenderer>().enabled = true;
        wall1.GetComponent<MeshRenderer>().enabled = true;
        wall2.GetComponent<MeshRenderer>().enabled = true;
    }
}
