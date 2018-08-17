using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.iOS;

public class WorldManager : MonoBehaviour {

    public showTypes tempType;

	private void Start()
	{
        resetScene();
        //ManagerScript.instance.ReInitPrefab();
	}

	public void restartScene()
	{
        SceneManager.LoadScene(SceneManager.GetActiveScene().name, LoadSceneMode.Single);
        Debug.Log("Restart scene!");

        resetScene();
        ManagerScript.instance.ReInitPrefab();
    }

    private void resetScene()
    {
        ARKitWorldTrackingSessionConfiguration sessionConfig = new ARKitWorldTrackingSessionConfiguration(UnityARAlignment.UnityARAlignmentGravity, UnityARPlaneDetection.Horizontal, false, true, true);
        UnityARSessionNativeInterface.GetARSessionNativeInterface().RunWithConfigAndOptions(sessionConfig, UnityARSessionRunOption.ARSessionRunOptionRemoveExistingAnchors | UnityARSessionRunOption.ARSessionRunOptionResetTracking);
    }

    public void SwitchWorld()
    {
        if(tempType == showTypes.HEYARNOLD)
        {
            SceneManager.LoadScene("Rugrats", LoadSceneMode.Single);

            resetScene();
            ManagerScript.instance.ReInitPrefab();

        }

        if (tempType == showTypes.RUGRATS)
        {
            SceneManager.LoadScene("Arnold", LoadSceneMode.Single);

            resetScene();
            ManagerScript.instance.ReInitPrefab();

        }
    }
}
