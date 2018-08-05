using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;



public class ParticleController : MonoBehaviour {


    public List<ParticleSystem> PSs;

    public HitTest_Select hitTest;

    float spaceTime;

    float timeLeft = 5.0f;
	
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

    void ActivateParticleEffect()
    {
        //GameObject child = hitTest.gameObject.transform.GetChild(0).gameObject;
        //Debug.Log("find child : " + child.name);


        if (hitTest.isDetecting == false)
        {
            foreach (ParticleSystem childParticle in PSs)
            {
                childParticle.gameObject.SetActive(true);

                timeLeft -= Time.deltaTime;

                if (timeLeft < 0.0f)
                {
                    childParticle.gameObject.SetActive(false);
                }      

            }
        }

    }




   public bool particleOn
    {

        get
        {
            return particleOn;
        }

        set
        {
            if(hitTest.isDetecting == true)
            {
                particleOn = value;

            }
        }
    }

}
