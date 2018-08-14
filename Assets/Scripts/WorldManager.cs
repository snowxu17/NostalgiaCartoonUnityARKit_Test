using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;

public class WorldManager : MonoBehaviour {

    public showTypes tempType;

	private void Awake()
	{
        resetScene();
	}

	public void restartScene()
	{
        SceneManager.LoadScene(SceneManager.GetActiveScene().name, LoadSceneMode.Single);
        Debug.Log("Restart scene!");

        ManagerScript.instance.ReInitPrefab();
        //resetScene();
    }

    private void resetScene()
    {
        ARKitWorldTrackingSessionConfiguration sessionConfig = new ARKitWorldTrackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.Horizontal);
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(sessionConfig, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void SwitchWorld()
    {
        if(tempType == showTypes.HEYARNOLD)
        {
            SceneManager.LoadScene("Rugrats", LoadSceneMode.Single);

            ManagerScript.instance.ReInitPrefab();
            //resetScene();
        }

        if (tempType == showTypes.RUGRATS)
        {
            SceneManager.LoadScene("Arnold", LoadSceneMode.Single);

            ManagerScript.instance.ReInitPrefab();
            //resetScene();
        }
    }
}
