using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeSpanHandler : MonoBehaviour {

    //public Scrollbar scrollbar;
    GetAPIData api;
    public GameObject parent;
   

	private void Awake()
    {
        //get start date and end date from the size and value of scrollbar
        //divide scrollbar value for a specific time range - past 1 year?

    }

    private void Update()
    {
        //Debug.Log("jhfghsdafaskjf: " + api.OnResponse.t_scr);
        ManagerScript.instance.RevealItems(api.totalScore, 2000, parent, worldTypes.HEYARNOLD);
    }

}
