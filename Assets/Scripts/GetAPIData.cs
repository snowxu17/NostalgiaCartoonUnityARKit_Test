using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;


public class GetAPIData : MonoBehaviour {

    [System.Serializable]
    public struct showIdList
    {
        [Tooltip("FB Rugrats ID: 126054, IG Rugrats ID: 625259, FB HeyArnold ID: 137946 , IG HeyArnold ID: 625251 ")]
        public int Id;
        public showTypes showName;    
    }

    public showTypes tempType;

    public showIdList show;

    private string POSTS_ENDPOINT = "https://api.crowdtangle.com/posts";      

    ////API_TOKEN_FB = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    ////API_TOKEN_IG = "VaVU9gRX1Gi5imI8E3PQzPkV9MzeWOwDkgL7RDFJ";   
    private string API_TOKEN = "TYUtgI4r8B1wTiYj0O5UJkKrVjsLHXzu6UxBJjLS";
    
    public string startDate = "2018-05-01";
    public string endDate = "2018-07-01";
    public string sortBy = "total_interactions";
    public int count = 10;

    private int score;
    public int totalScore;

    public Text responseText;
    public Dropdown s_dropdown;
    public Dropdown e_dropdown;

    public int numDays;

    public List<string> startDates;
    public List<string> endDates;


    private void Awake()
    {
        Request(show);

        // on awake set default time range to now - 1 month ago
        
    }

    public void Request(showIdList show)
    {                 
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;
        headers["x-api-token"] = API_TOKEN;
        WWW request = new WWW(POSTS_ENDPOINT
            + "?startDate=" + startDate
            + "&endDate=" + endDate
            + "&sortBy=" + sortBy
            + "&listIds=" + this.show.Id
            + "&count=" + count,
            null, headers);

        Debug.Log("Data requested!");
        Debug.Log("Show id :" + this.show.Id);
        Debug.Log(request.url);
        StartCoroutine(OnResponse(request, show));
        StartCoroutine(DayCounter(startDate, endDate));
    }

    private IEnumerator OnResponse(WWW req, showIdList show)
    {
        int t_scr = 0;

        yield return req;

        //responseText.text = req.text;
            
        JSONNode data = JSON.Parse(req.text);

        List<string> parsedData = new List<string>();
        List<int> postScores = new List<int>();    
            
        foreach (JSONNode post in data["result"]["posts"])
        {
            string message = post["message"].Value;
            string account = post["account"]["name"].Value;
            score = post["score"].AsInt;
            //Debug.Log("Account name: " + account + "; Caption: " + message + "; Score: " + score);
                
            //postScores.Add(score);
            //parsedData.Add("Account name: " + account + "; Caption: " + message + "; Score: " + score);

            t_scr += score;
            //Debug.Log(" + " + score + ", total score: " + t_scr);
        }

        if (req.isDone == true)
        {
            Debug.Log("Data downloaded.");
            totalScore = t_scr;    
        }        

        if (totalScore > 0)
        {
            Debug.Log("End total score: " + totalScore);

            ManagerScript.instance.RevealItems(totalScore, 70000, this.gameObject, tempType);
        }
    }

    
    public IEnumerator DayCounter(string startDate, string endDate)
    {        
        string[] start = startDate.Replace('-', ',').Split(',');
        string[] end = endDate.Replace('-', ',').Split(',');

        System.DateTime s = new System.DateTime(System.Convert.ToInt32(start[0]), System.Convert.ToInt32(start[1]), System.Convert.ToInt32(start[2]));
        System.DateTime e = new System.DateTime(System.Convert.ToInt32(end[0]), System.Convert.ToInt32(end[1]), System.Convert.ToInt32(end[2]));

        var numDays = e.Subtract(s).TotalDays;
        Debug.Log("numDays: " + numDays);

        yield return numDays;

    }  

    public void ChangeStartTime()
    {
        int idx = s_dropdown.value;

        Debug.Log(s_dropdown.gameObject.name + " selected dropdown value: " + s_dropdown.value);

        for (int i = 0; i < s_dropdown.options.Count; i++)
        {            
            int s_m = System.DateTime.Now.AddMonths(-1 - i).Month;
            int s_y = System.DateTime.Now.Year;

            if ( System.DateTime.Now.Month <= 1 + i)
            {
                s_y -= 1;
            }

            string startDate = System.Convert.ToString(s_y) + "-" + System.Convert.ToString(s_m) + "-01";        
            Debug.Log("start month : " + startDate);

            startDates.Add(startDate);
        }
        Debug.Log("Selected start date: " + startDates[idx]);
    }

    public void ChangeEndTime()
    {
        //Dropdown index
        int idx = e_dropdown.value;

        Debug.Log(e_dropdown.gameObject.name + " selected dropdown value: " + idx);

        int currentMonth = System.DateTime.Now.Month;
        int currentYear = System.DateTime.Now.Year;

        for (int j = 0; j < e_dropdown.options.Count; j++)
        {
            int e_m = System.DateTime.Now.AddMonths(- j).Month;
            int e_y = currentYear;

            if (currentMonth <= j)
            {
                e_y -= 1;
            }

            string endDate = System.Convert.ToString(e_y) + "-" + System.Convert.ToString(e_m) + "-" + System.Convert.ToString(System.DateTime.DaysInMonth(e_y, e_m));
            Debug.Log("end month : " + endDate);

            endDates.Add(endDate);
        }

        Debug.Log("Selected end date: " + endDates[idx]);
    }

    public IEnumerator CheckIndex()
    {


        yield return null;
    }

}
