using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class getTouch : MonoBehaviour {

    public float speed = 0.01F;

    public GameObject projectile;
    public GameObject clone;

    public GameObject particle;

	void Update () {
        //if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        //{
        //// Move object accross X,Y plane 
        //Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
        //transform.Translate(touchDeltaPosition.x * speed, touchDeltaPosition.y * speed, 0);
        //}


        //for (int i = 0; i < Input.touchCount; i++)
        //{
        //    if(Input.GetTouch(i).phase == TouchPhase.Began)
        //        clone = Instantiate(projectile, transform.position, transform.rotation) as GameObject;

        //}

        for (int i = 0; i < Input.touchCount; ++i)
        {
            if (Input.GetTouch(i).phase == TouchPhase.Began)
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
                if (Physics.Raycast(ray))
                    Instantiate(particle, transform.position, transform.rotation);
            }

        }
	}
}