using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LetsGo : MonoBehaviour {

    public GameObject button;
    float timeCounter = 0;

    bool loadAsync = false;

    AsyncOperation asyncLoad;

	void Start () {

        button.SetActive(false);
	}
	
	
	void Update () {

        timeCounter += Time.deltaTime;

        if(timeCounter > 5.5f)
        {
            button.SetActive(true);
            loadAsync = true;
        }
	}

    public void goToRugrats()
    {
        //loadAsync = true;
        //asyncLoad.allowSceneActivation = true;

        //Camera.main.backgroundColor = Color.black;

        Debug.Log("Botton pressed!");
        SceneManager.LoadScene("Rugrats", LoadSceneMode.Single);
        //SceneManager.LoadScene("LoadingScene", LoadSceneMode.Single);


    }

    IEnumerator LoadAsyncScene()
    {
        asyncLoad = SceneManager.LoadSceneAsync("Rugrats", LoadSceneMode.Single);

        asyncLoad.allowSceneActivation = false;

        while(!asyncLoad.isDone)
        {
            yield return null;
        }
    }
}
