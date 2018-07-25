using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;

public class GetAPIData : MonoBehaviour {

    private string POSTS_ENDPOINT = "https://api.crowdtangle.com/posts";
    private string API_TOKEN = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    //connect to UI to allow selection of range
    public int listIds = 126054;
    public string startDate = "2018-05-01";
    public string endDate = "2018-07-01";
    public string sortBy = "total_interactions";
    public int count = 10;

    public int score;

    public Text responseText;

    public void Request()
    {
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;
        headers["x-api-token"] = API_TOKEN;
        WWW request = new WWW(POSTS_ENDPOINT 
            + "?startDate=" + startDate
            + "&endDate=" + endDate
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

        JSONNode data = JSON.Parse(req.text);
        List<string> parsedData = new List<string>();
        List<int> rugratsScores = new List<int>();

        foreach (JSONNode post in data["result"]["posts"])
        {
            string message = post["message"].Value;
            string account = post["account"]["name"].Value;
            score = post["score"].AsInt;
            Debug.Log("Account name: " + account + "; Caption: " + message + "; Score: " + score);
            //Debug.Log(message);
            //Debug.Log("score);

            rugratsScores.Add(score);
            parsedData.Add("Account name: " + account + "; Message: " + message + "; Score: " + score);
        }

        //responseText.text = parsedData;
    }

}
