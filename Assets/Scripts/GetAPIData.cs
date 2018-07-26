using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;

[System.Serializable]
public enum showTypes
{
    RUGRATS,
    HEYARNOLD
};

public class GetAPIData : MonoBehaviour {

    [System.Serializable]
    public struct showIdList
    {
        [Tooltip("FB Rugrats ID: 126054, IG Rugrats ID: 625259, FB HeyArnold ID: 137946 , IG HeyArnold ID: 625251 ")]
        public int[] showIds;
        public showTypes showReference;
    }

    public showTypes tempType;
    public showIdList[] ids;

    private string POSTS_ENDPOINT = "https://api.crowdtangle.com/posts";      

    //API_TOKEN_FB = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    //API_TOKEN_IG = "VaVU9gRX1Gi5imI8E3PQzPkV9MzeWOwDkgL7RDFJ";   
    private string API_TOKEN = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";

    //[Tooltip("FB Rugrats ID: 126054, IG Rugrats ID: 625259, FB HeyArnold ID: , IG HeyArnold ID: ")]       
    //public int listIds = 126054;
    public string startDate = "2018-05-01";
    public string endDate = "2018-07-01";
    public string sortBy = "total_interactions";
    public int count = 10;

    public int score;

    public Text responseText;


    /*public void Request()
    {
       
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;
        headers["x-api-token"] = API_TOKEN;
        WWW request = new WWW(POSTS_ENDPOINT
            + "?startDate=" + startDate
            + "&endDate=" + endDate
            + "&sortBy=" + sortBy
            + "&listIds=" + ids
            + "&count=" + count,
            null, headers);

        Debug.Log(request.url);
        StartCoroutine(OnResponse(request));
        
    }
    */

    private void Awake()
    {
        Request(ids);
    }

    public void Request(showIdList[] ids)
    {
        for (int i = 0; i < ids.Length; i++)
        {            
            WWWForm form = new WWWForm();
            Dictionary<string, string> headers = form.headers;
            headers["x-api-token"] = API_TOKEN;
            WWW request = new WWW(POSTS_ENDPOINT
                + "?startDate=" + startDate
                + "&endDate=" + endDate
                + "&sortBy=" + sortBy
                + "&listIds=" + ids[i]
                + "&count=" + count,
                null, headers);

            Debug.Log(ids[i]);

            //Debug.Log(request.url);
            StartCoroutine(OnResponse(request));
        }
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
            Debug.Log("score");

            rugratsScores.Add(score);
            parsedData.Add("Account name: " + account + "; Message: " + message + "; Score: " + score);
        }
    }



    //protected virtual IEnumerator CountDay(string startDate, string endDate)
    //{
    //    var dayCount = 0;

    //    var numOfDays = System.DateTime.DaysInMonth(2018, 6);                      

    //    //var start = new System.DateTime(startDate);
    //    //var end = new System.DateTime(endDate);

    //    yield return dayCount; 
    //}
}
