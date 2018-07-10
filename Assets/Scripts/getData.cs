using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class getData : MonoBehaviour {

    private string POSTS_ENDPOINT = "https://api.crowdtangle.com/posts";
    private string API_TOKEN = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    public int listIds = 126054;
    public string startDate = "2018-05-01"; //connect to UI
    public string sortBy = "total_interactions";
    public int count = 5;

    public Text responseText;

    public void Request()
    {
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;
        headers["x-api-token"] = API_TOKEN;
        WWW request = new WWW(POSTS_ENDPOINT 
            + "?startDate=" + startDate 
            + "&sortBy=" + sortBy
            + "&listIds=" + listIds 
            + "&count=" + count, 
            null, headers);

        Debug.Log(request.url);
        StartCoroutine(OnResponse(request));
    }

    private IEnumerator OnResponse(WWW req)
    {
        yield return req;

        if (req.isDone == true)
        {
            Debug.Log("Data downloaded.");
        }

        responseText.text = req.text;

        string jsonData = JsonUtility.ToJson(req.text);
    }

}
