using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AnimatedText : MonoBehaviour
{
    public float letterPaused = 10000.0f;
    
    public string message = "Loading....";
    
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
        //for (int i = 0; i < message.Length; i++)
        //{

        //    if (i < message.Length - 1)
        //    {
        //        textComp.text += message[i];
        //        Debug.Log(i);
        //        //yield return 0;

        //    }

        //    if ( i == message.Length - 1)
        //    {
        //        i = 0;

        //        textComp.text = "";

        //        textComp.text += message[0];
        //        //yield return 0;

        //    }

        //    yield return new WaitForSeconds(0.1f); 

        //}
       
        foreach (char letter in message.ToCharArray())
        {

            textComp.text += letter;
            //yield return 0;

            yield return new WaitForSeconds(letterPaused);            
        }        
    }
}