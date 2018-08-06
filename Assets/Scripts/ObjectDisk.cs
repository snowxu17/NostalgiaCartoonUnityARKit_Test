using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Touch;

public class ObjectDisk : MonoBehaviour {

    GameObject disk;
	
	void Start ()
    {
        foreach (Transform child in gameObject.transform)
        {            
            disk = child.GetChild(0).gameObject;
            disk.SetActive(false);
            Debug.Log(disk.name);
        }
    }
	

    public void RevealDisk ()
    {
        foreach (Transform child in gameObject.transform)
        {
           if (child.GetComponent<LeanSelectable>().IsSelected == true && child.GetComponent<LeanSelectable>().enabled == true)
            {
                child.GetChild(0).gameObject.SetActive(true);
            }
        }
    }


    public IEnumerator HideDisk ()
    {
        foreach (Transform child in gameObject.transform)
        {
            if (child.GetComponent<LeanSelectable>().IsSelected == false)
            {
                Animation anim = child.GetChild(0).GetComponent<Animation>();

                //anim.Play("DiskHide");                                
                //yield return new WaitForSeconds("DiskHide".Length);

                child.GetChild(0).gameObject.SetActive(false);

                yield return null;
            }
        }
    }
	

	void Update ()
    {
        RevealDisk();
        StartCoroutine(HideDisk());
	}
}
