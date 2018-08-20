using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LetsGo : MonoBehaviour {


    public GameObject button;
    float timeCounter = 0;

	void Start () {

        button.SetActive(false);
	}
	
	
	void Update () {

        timeCounter += Time.deltaTime;

        if(timeCounter > 5.5f)
        {
            button.SetActive(true);
        }
	}

    public void goToRugrats()
    {
        SceneManager.LoadScene("Rugrats", LoadSceneMode.Single);
    }
}
