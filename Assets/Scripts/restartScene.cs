using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class restartScene : MonoBehaviour {

    public string sceneName = "RugratsAR_Lean";


	public void Update()
	{
        loadScene();
	}

	public void loadScene()
	{
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
        Debug.Log("Load scene: " + sceneName);
	}
	
}
