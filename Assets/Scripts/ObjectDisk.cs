using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class ObjectDisk : MonoBehaviour {

    GameObject disk;

    IEnumerator ShowDisk()
    {
        foreach (Transform child in gameObject.transform)
        {
           if (child.GetComponent<LeanSelectable>().IsSelected == true && child.GetComponent<LeanSelectable>().enabled == true)
            {                
                Animator animator = child.GetChild(0).GetComponent<Animator>();

                animator.SetTrigger("GoToShow");
                animator.ResetTrigger("GoToHide");
                animator.ResetTrigger("GoToNone");

                yield return null;
            }
        }
    }


    IEnumerator HideDisk ()
    {
        foreach (Transform child in gameObject.transform)
        {
            if (child.GetComponent<LeanSelectable>().IsSelected == false)
            {
                Animator animator = child.GetChild(0).GetComponent<Animator>();

                animator.ResetTrigger("GoToShow");
                animator.SetTrigger("GoToHide");
                animator.SetTrigger("GoToNone");

                yield return null;
            }
        }
    }
	

	void Update ()
    {
        StartCoroutine(ShowDisk());

        StartCoroutine(HideDisk());
	}
}
