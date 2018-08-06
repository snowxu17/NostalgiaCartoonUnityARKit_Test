using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;



public class ParticleController : MonoBehaviour {

    public List<ParticleSystem> PSs;
    public HitTest_Select hitTest;
       
	
	void Awake () 
    {
        foreach (Transform childParticle in gameObject.transform)
        {
            PSs.Add(childParticle.GetComponent<ParticleSystem>());
            childParticle.gameObject.SetActive(false);
        }

        hitTest = FindObjectOfType(typeof(HitTest_Select)) as HitTest_Select;
	}
		

	void Update () 
    {
        ActivateParticleEffect();
	}


    public void ActivateParticleEffect()
    {        
        if (hitTest.isDetecting == false)
        {
            foreach (ParticleSystem childParticle in PSs)
            {
                childParticle.gameObject.SetActive(true);
            }
        }
    }


   //public bool particleOn
    //{

    //    get
    //    {
    //        return particleOn;
    //    }

    //    set
    //    {
    //        if(hitTest.isDetecting == true)
    //        {
    //            particleOn = value;

    //        }
    //    }
    //}

}
