using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;

public class WorldManager : MonoBehaviour {

    showTypes tempType;

    //public string sceneName;

    public enum worldName
    {
        Rugrats,
        HeyArnold
    }

	public void Update()
	{
        restartScene();
        resetScene();
	}

	public void restartScene()
	{
        SceneManager.LoadScene(SceneManager.GetActiveScene().name, LoadSceneMode.Single);
        Debug.Log("Restart scene!");
	}

    public void resetScene()
    {
        ARKitWorldTrackingSessionConfiguration sessionConfig = new ARKitWorldTrackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.HorizontalAndVertical);
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(sessionConfig, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void SwitchWorld()
    {
        if(tempType == showTypes.HEYARNOLD)
        {
            SceneManager.LoadScene("Rugrats_0727", LoadSceneMode.Single);
        }

        if (tempType == showTypes.RUGRATS)
        {
            SceneManager.LoadScene("API", LoadSceneMode.Single);
        }
    }
}
