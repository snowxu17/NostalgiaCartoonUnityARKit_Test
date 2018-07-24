using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;

public class restartScene : MonoBehaviour {

    public string sceneName = "RugratsAR_TransformSelect";


	public void Update()
	{
        loadScene();
        resetScene();
	}

	public void loadScene()
	{
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
        Debug.Log("Load scene: " + sceneName);
	}

    public void resetScene()
    {
        ARKitWorldTrackingSessionConfiguration sessionConfig = new ARKitWorldTrackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.HorizontalAndVertical);
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(sessionConfig, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }
}
