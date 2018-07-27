using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnBallOnTouch : MonoBehaviour {



    public GameObject spherePrefab;
    public float force = 5.0f;

    private Rigidbody rb;
	
	// Update is called once per frame
	void Update () {


        Touch touch = Input.GetTouch(0);

        if (touch.phase == TouchPhase.Began)
        {
            GameObject go = Instantiate(spherePrefab, transform.position, transform.rotation);
            go.GetComponent<Rigidbody>().velocity = transform.forward * force;
        }
	}

}
