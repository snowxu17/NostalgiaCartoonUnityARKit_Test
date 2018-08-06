using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;

[System.Serializable]

public class GetAPIData_TwoWorlds : MonoBehaviour
{
    [System.Serializable]
    public struct showIdList
    {
        [Tooltip("FB Rugrats ID: 126054, IG Rugrats ID: 625259, FB HeyArnold ID: 137946 , IG HeyArnold ID: 625251 ")]
        public int Id;
        public showTypes showName;
    }

    public showTypes tempType;
    public showIdList[] shows;

    private string POSTS_ENDPOINT = "https://api.crowdtangle.com/posts";

    ////API_TOKEN_FB = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    ////API_TOKEN_IG = "VaVU9gRX1Gi5imI8E3PQzPkV9MzeWOwDkgL7RDFJ";   
    private string API_TOKEN = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";

    public string startDate = "2018-05-01";
    public string endDate = "2018-07-01";
    public string sortBy = "total_interactions";
    public int count = 10;

    private int score;
    public int[] t_scr;

    /*
    public struct scoreList
    {
        public int t_score;
        public showTypes showName;
    }
    public scoreList[] scores;
    */

    public Text responseText;


    private void Awake()
    {
        Request(shows);

        t_scr = new int[shows.Length];
        //Debug.Log("show length " + shows.Length);

        DayCounter(startDate, endDate);
    }

    public void Request(showIdList[] shows)
    {
        for (int i = 0; i < shows.Length; i++)
        {
            WWWForm form = new WWWForm();
            Dictionary<string, string> headers = form.headers;
            headers["x-api-token"] = API_TOKEN;
            WWW request = new WWW(POSTS_ENDPOINT
                + "?startDate=" + startDate
                + "&endDate=" + endDate
                + "&sortBy=" + sortBy
                + "&listIds=" + this.shows[i].Id
                + "&count=" + count,
                null, headers);

            Debug.Log("Data requested!");
            //Debug.Log(this.shows[i].Id);
            //Debug.Log(request.url);
            StartCoroutine(OnResponse(request, shows));
        }
    }

    private IEnumerator OnResponse(WWW req, showIdList[] shows)
    {
        yield return req;

        //responseText.text = req.text;

        for (int i = 0; i < shows.Length; i++)
        {
            Debug.Log("Show index " + i + " data in:");

            JSONNode data = JSON.Parse(req.text);

            //List<string> parsedData = new List<string>();
            //List<int> postScores = new List<int>();

            foreach (JSONNode post in data["result"]["posts"])
            {
                string message = post["message"].Value;
                string account = post["account"]["name"].Value;
                score = post["score"].AsInt;
                //Debug.Log("Account name: " + account + "; Caption: " + message + "; Score: " + score);

                //postScores.Add(score);
                //parsedData.Add("Account name: " + account + "; Caption: " + message + "; Score: " + score);

                t_scr[i] += score;
                Debug.Log(" + " + score + ", total score: " + t_scr[i]);
            }
        }

        if (req.isDone == true)
        {
            Debug.Log("Data downloaded.");
        }
    }

    public void DayCounter(string startDate, string endDate)
    {
        string[] start = startDate.Replace('-', ',').Split(',');
        string[] end = endDate.Replace('-', ',').Split(',');

        System.DateTime s = new System.DateTime(System.Convert.ToInt32(start[0]), System.Convert.ToInt32(start[1]), System.Convert.ToInt32(start[2]));
        System.DateTime e = new System.DateTime(System.Convert.ToInt32(end[0]), System.Convert.ToInt32(end[1]), System.Convert.ToInt32(end[2]));

        var numDays = e.Subtract(s).TotalDays;
        Debug.Log("numDays: " + numDays);

        //yield return numDays; 
    }
}