using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AnimatedText : MonoBehaviour
{
    public float letterPaused = 1.0f;
    
    public string message = "Loading...";
    
    public Text textComp;

    void Start()
    {       
        textComp = GetComponent<Text>();        
        message = textComp.text;

        //Set the text to be blank first
        textComp.text = "";
        
        StartCoroutine(TypeText());
    }

    IEnumerator TypeText()
    {
       
        foreach (char letter in message.ToCharArray())
        {

            textComp.text += letter;
            //yield return 0;
            yield return new WaitForSeconds(letterPaused);            
        }        
    }
}