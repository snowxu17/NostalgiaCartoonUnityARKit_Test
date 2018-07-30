using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DropdownController : MonoBehaviour {

    public GetAPIData api;
    public Dropdown m_dropdown;

    int m_DropdownVal;

    private void Awake()
    {
        m_dropdown = gameObject.GetComponent<Dropdown>();
        //Debug.Log("child count" + m_dropdown.options.Count);

        api = FindObjectOfType(typeof(GetAPIData)) as GetAPIData;
        
    }

    private void Update()
    {
        Debug.Log(gameObject.name + " selected dropdown value: " + m_dropdown.value);

        for (int i = 0; i < m_dropdown.options.Count; i ++)
        {
            
        }

    }
}
