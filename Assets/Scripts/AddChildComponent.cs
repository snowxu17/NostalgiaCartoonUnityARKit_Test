using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class AddChildComponent : MonoBehaviour {  

    private void Awake()
    {
        foreach (Transform child in gameObject.transform)
        {       
            //child.gameObject.AddComponent<LeanRotate>();
            child.gameObject.AddComponent<LeanScale>();
            child.gameObject.AddComponent<LeanTranslate>();
            child.gameObject.AddComponent<Rigidbody>();

            child.gameObject.GetComponent<Rigidbody>().drag = 10;
            child.gameObject.GetComponent<Rigidbody>().angularDrag = 10;
            child.gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeRotation;
        }

    }
}
