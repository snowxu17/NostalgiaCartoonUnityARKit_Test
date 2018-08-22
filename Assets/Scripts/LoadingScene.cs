using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingScene : MonoBehaviour {

    public Color color1 = Color.red;
    public Color color2 = Color.blue;
    public float duration = 3.0F;

	void Update () {

        StartCoroutine(LoadAsync());
	}

    IEnumerator LoadAsync()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Rugrats");
        asyncLoad.allowSceneActivation = false;

        // Wait until the asynchronous scene fully loads
        while (asyncLoad.progress < 0.9f)
        {
            yield return null;
        }

        //float t = Mathf.PingPong(Time.time, duration) / duration;
        //Camera.main.backgroundColor = Color.Lerp(color1, color2, t);

        asyncLoad.allowSceneActivation = true;

    }
}
