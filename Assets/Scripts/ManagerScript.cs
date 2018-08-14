using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Allow these enums to be accessed elsewhere
[System.Serializable]
public enum showTypes
{
    RUGRATS,
    HEYARNOLD
};

public class ManagerScript : MonoBehaviour {

    [System.Serializable]
    public struct worldObjectList
    {
        public GameObject[] objectReferences;
        public showTypes worldReference;
    }
    [System.Serializable]
    public struct objectArrangement
    {
        public int maxDistanceFromOrigin;
        public int minDistanceFromOrigin;

    }

    public TextMesh debugRender;
    public string debugString;

    public static List<GameObject> arKitPlaneRenderers;
    public GameObject originalOutlineARPrefab;
    
    //This is how you create a "singleton type" of pattern -- there should only be one of these scripts in a scene -- you can use "instance" to reference it at all times to understand the behavior of the app
    public static ManagerScript instance;

    //Put all items in the scene here
    public worldObjectList[] worlds;

    public Vector3[] listOfPositions;

    GetAPIData api;
    //*** TESTING ONLY
    public showTypes tempType;
    public int scr;
    public int thresh;

    /// <summary>
    /// ///
    /// </summary>


    private void Awake()
    {
        Debug.Log("Hey");




        arKitPlaneRenderers = new List<GameObject>();

        //Initialize global reference to this script
        if (instance == null) instance = this;
        else if (instance != this)
        {
            Debug.LogError("Make sure there is only one Manager Script in the scene!");
            //Delete this object
            Destroy(gameObject);
        }

        DeActivateAllObjs(worlds);

        //JUST FOR TESTING
        //RevealItems(scr,thresh, this.gameObject, tempType);
        //Debug.Log("Object revealed!");
    }


    private void DeActivateAllObjs(worldObjectList[] worlds)
    {
        for (int i = 0; i < this.worlds.Length; i++)
        {
            for (int j = 0; j < this.worlds[i].objectReferences.Length; j++)
            {
                this.worlds[i].objectReferences[j].SetActive(false);
            }
        }
    }

    private void InitializeLocations(int itemsToAppear, Vector3 origin)
    {
   
        listOfPositions = new Vector3[itemsToAppear];

        for (int i = 0; i < listOfPositions.Length; i++)
        {
            //** ADD THIS IN LATER TO CHANGE WHERE ITEMS APPEAR ON PLANE
            //Right now it just goes to 0,0,0
            listOfPositions[i] = Vector3.zero;
        }
     
    }

    private void ActivateRandomObject(showTypes world, worldObjectList[] worlds, int numberOfObjs, GameObject plane)
    {
        for (int i = 0; i < this.worlds.Length; i++)
        {
            //We have found the list with the proper world
            if (worlds[i].worldReference == world)
            {
                StartCoroutine(delayedActivate(i, this.worlds, numberOfObjs, plane));
                break;
            }
        }
    }

    public void ResetWorlds()
    {
        DeActivateAllObjs(worlds);
    }

    //Input the score/number value you are comparing with, threshold/number value to reveal item, the arplane you will be parenting the object to.. the main plane you find in the space, which world you are in
    public void RevealItems(int score, int threshold, GameObject activeARPlane, showTypes world)
    {
        int itemsToReveal = score / threshold;

        InitializeLocations(itemsToReveal, activeARPlane.transform.position);
        ActivateRandomObject(world, worlds, itemsToReveal, activeARPlane);
    }

    IEnumerator delayedActivate(int index, worldObjectList[] worlds, int num, GameObject parent)
    {
        int randomNum;
        int itemsFound = 0;

        while (itemsFound < num && itemsFound < worlds[index].objectReferences.Length)
        {
            randomNum = Random.Range(0, this.worlds[index].objectReferences.Length);

            //If this object is not already active
            if (!worlds[index].objectReferences[randomNum].activeInHierarchy)
            {
                worlds[index].objectReferences[randomNum].SetActive(true);
                worlds[index].objectReferences[randomNum].transform.SetParent(parent.transform, false);
                //worlds[index].objectReferences[randomNum].transform.position = listOfPositions[randomNum];
                itemsFound++;
            }
        }
        yield return null;
    }


    public void AddPlaneRenderer(GameObject go)
    {
        arKitPlaneRenderers.Add(go);
    }

    public void DeActivateAllPlanes()
    {
        debugString += " deactPlns:  " + arKitPlaneRenderers.Count;
        debugRender.text = debugString;

        if (arKitPlaneRenderers != null && arKitPlaneRenderers.Count > 0)
        {
            for (int i = 0; i < arKitPlaneRenderers.Count; i++)
            {
                arKitPlaneRenderers[i].SetActive(false);
            }
        }
        Debug.LogWarning("DeActivatePlanes function called in Manager.. deactivating: " + arKitPlaneRenderers.Count + " planes");
    }

    public void AssignARPrefab(GameObject go){
        originalOutlineARPrefab = go;
    }

    public void ReInitPrefab(){
        originalOutlineARPrefab.SetActive(true);

    }
}
