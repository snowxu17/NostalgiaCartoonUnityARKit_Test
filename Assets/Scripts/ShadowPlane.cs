using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowPlane : MonoBehaviour {

    public GameObject shadowPlane;

    public void Awake()
    {        
        shadowPlane.GetComponent<MeshRenderer>().enabled = false;
    }

    public void ShowShadowPlane()
    {
        Debug.Log("Shadow plane on!");
        shadowPlane.GetComponent<MeshRenderer>().enabled = true;
    }
}
