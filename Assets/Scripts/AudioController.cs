using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class AudioController : MonoBehaviour {

    AudioSource m_MyAudioSource;

    bool m_Play;

    private HitTest_Select ht;   


    void Start()
    {
        ht = HitTest_Select.Instance();

        m_MyAudioSource = this.gameObject.GetComponent<AudioSource>();

        m_Play = true;
    }

    void Update()
    {
        if (ht.isDetecting == false && m_Play == true)
        {            
            m_MyAudioSource.Play();
        }

    }
}
