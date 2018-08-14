using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;



public class ParticleController : MonoBehaviour {

    public List<ParticleSystem> PSs;
    private HitTest_Select ht;   
	
	void Awake () 
    {
        foreach (Transform childParticle in gameObject.transform)
        {
            PSs.Add(childParticle.GetComponent<ParticleSystem>());
            childParticle.gameObject.SetActive(false);
        }
        ht = HitTest_Select.Instance();
	}
		

	void Update () 
    {
        ActivateParticleEffect();
	}


    public void ActivateParticleEffect()
    {        
        if (ht.isDetecting == false)
        {
            foreach (ParticleSystem childParticle in PSs)
            {
                childParticle.gameObject.SetActive(true);
            }
        }
    }
}
