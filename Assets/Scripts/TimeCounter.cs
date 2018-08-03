using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeCounter : MonoBehaviour {

    public float timeLeft = 7.0f;
    public Button button;

    
    void Update () {
        timeLeft -= Time.deltaTime;
        //Debug.Log(timeLeft);

        if (timeLeft < 0.0f)
        {
            button.gameObject.SetActive(false);
            this.gameObject.SetActive(false);
        }        
    }
}
