using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using SimpleJSON;
using UnityEngine.XR.iOS;


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

    public string startDate; ///in the format of "2018-05-01";
    public string endDate; ///in the format of "2018-07-01";
    public string sortBy = "total_interactions";
    public int count = 10;

    private int score;
    private int maxScr;
    public int totalScore; ///the final score for each show

    public int threshold = 100000;

    public Text responseText;
    public Dropdown s_dropdown;
    public Dropdown e_dropdown;

    public GameObject warning;
    public GameObject warning_arrows;
    public GameObject loading;
    public GameObject loadingBox;
    public GameObject specialEffect;
    public GameObject request;
    public GameObject hideTime;
    public GameObject tmGuide;

    int numDays;
    float t;

    public List<string> startDates;
    public List<string> endDates;

    public GameObject parent;



    private void Awake()
    {   
        ChangeStartTime();
        ChangeEndTime();

        Request(show, startDates[s_dropdown.value], endDates[e_dropdown.value]);

        maxScr = threshold * 19 - 100;

        /*
        for (int i = 0; i < ManagerScript.instance.worlds.Length; i++)
        {
            maxScr = threshold * ManagerScript.instance.worlds[i].objectReferences.Length - 100;       
        }
        */
 
        Debug.Log("Max score is :" + maxScr);

        //s_dropdown.onValueChanged.AddListener(delegate 
        //{ DropdownValueChanged(s_dropdown);
        //});

        //e_dropdown.onValueChanged.AddListener(delegate
        //{
        //    DropdownValueChanged(e_dropdown);
        //});

    }

    public void Request(showIdList show, string startDate, string endDate)
    {                 
        WWWForm form = new WWWForm();
        Dictionary<string, string> headers = form.headers;
        headers["x-api-token"] = API_TOKEN;
        WWW request = new WWW(POSTS_ENDPOINT
            + "?startDate=" + startDates[s_dropdown.value]
            + "&endDate=" + endDates[e_dropdown.value]
            + "&sortBy=" + sortBy
            + "&listIds=" + this.show.Id
            + "&count=" + count,
            null, headers);
        
        //Debug.Log("Show id :" + this.show.Id);
        Debug.Log(request.url);
        Debug.Log("Data requested!");
        StartCoroutine(OnResponse(request, show));
        StartCoroutine(DayCounter(startDate, endDate));
    }

    private IEnumerator OnResponse(WWW req, showIdList show)
    {
        int t_scr = 0;

        yield return req;

        //responseText.text = req.text;
            
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

            t_scr += score;
            //Debug.Log(" + " + score + ", total score: " + t_scr);
        }

        if (req.isDone == true)
        {            
            Debug.Log("Data downloaded.");
            totalScore = t_scr;
        }
        
        if (totalScore > 1000)
        {
            Debug.Log("End total score: " + totalScore);
            loading.SetActive(false);            
            loadingBox.SetActive(false);           

            int m_totalScore = Mathf.Clamp(totalScore, 0, maxScr);
            Debug.Log("Constrained total score: " + m_totalScore);

            if (totalScore > maxScr)
            {
                Debug.Log("total score is bigger!!!!!!!!!!");                                             
            }

            ManagerScript.instance.ResetWorlds();
            ManagerScript.instance.RevealItems(m_totalScore, threshold, parent, tempType);
            //ManagerScript.instance.RevealItems(totalScore, threshold, parent, tempType);
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
        //Dropdown menu index
        int s_idx = s_dropdown.value;
        string s_date;

        startDates.Clear();

        //Debug.Log(s_dropdown.gameObject.name + " selected dropdown value: " + s_idx);

        for (int i = 0; i < s_dropdown.options.Count; i++)
        {            
            int s_m = System.DateTime.Now.AddMonths(-1 - i).Month;
            int s_y = System.DateTime.Now.Year;
            //int s_d = System.DateTime.Now.AddDays(- 30).Day;


            if ( System.DateTime.Now.Month <= 1 + i)
            {
                s_y -= 1;
            }

            if (s_m < 10)
            {
                s_date = System.Convert.ToString(s_y) + "-0" + System.Convert.ToString(s_m) + "-01";
            }
            else
            {
                s_date = System.Convert.ToString(s_y) + "-" + System.Convert.ToString(s_m) + "-01";
            }

           //Debug.Log("start month : " + s_date);

            startDates.Add(s_date);
        }

        //Debug.Log("Selected start date: " + startDates[s_idx]);
        StartCoroutine(CheckIndex());
        updateDropdownStart(startDates);
    }

    public void ChangeEndTime()
    {
        int e_idx = e_dropdown.value;
        string e_date;

        endDates.Clear();

        //Debug.Log(e_dropdown.gameObject.name + " selected dropdown value: " + e_idx);

        for (int j = 0; j < e_dropdown.options.Count; j++)
        {
            int e_m = System.DateTime.Now.AddMonths(- j).Month;
            int e_y = System.DateTime.Now.Year;
            int e_d = System.DateTime.DaysInMonth(e_y, e_m);

            if (System.DateTime.Now.Month <= j)
            {
                e_y -= 1;
            } 

            if (e_m < 10)
            {
                e_date = System.Convert.ToString(e_y) + "-0" + System.Convert.ToString(e_m) + "-" + System.Convert.ToString(e_d);

                if ( j == 0)
                {
                    e_d = System.DateTime.Now.Day;

                    if (e_d > 9)
                    {
                        e_date = System.Convert.ToString(e_y) + "-0" + System.Convert.ToString(e_m) + "-" + System.Convert.ToString(e_d);
                    }
                    else
                    {
                        e_date = System.Convert.ToString(e_y) + "-0" + System.Convert.ToString(e_m) + "-0" + System.Convert.ToString(e_d);
                    }
                }
            }

            else
            {
                e_date = System.Convert.ToString(e_y) + "-" + System.Convert.ToString(e_m) + "-" + System.Convert.ToString(e_d);

                if ( j == 0)
                {
                    e_d = System.DateTime.Now.Day;

                    if (e_d > 9)
                    {
                        e_date = System.Convert.ToString(e_y) + "-0" + System.Convert.ToString(e_m) + "-" + System.Convert.ToString(e_d);
                    }
                    else
                    {
                        e_date = System.Convert.ToString(e_y) + "-" + System.Convert.ToString(e_m) + "-0" + System.Convert.ToString(e_d);
                    }
                }
            }
                                   
            //Debug.Log("end month : " + e_date);

            endDates.Add(e_date);
        }

        //Debug.Log("Selected end date: " + endDates[e_idx]);
        StartCoroutine(CheckIndex());
        //StartCoroutine(updateDropdownEnd(endDates));
        updateDropdownEnd(endDates);
    }


    public IEnumerator CheckIndex()
    {
        // When start date and end date are the same
        if (s_dropdown.value == e_dropdown.value - 2|| s_dropdown.value < e_dropdown.value - 2)
        {
            Debug.Log("Time range error!");

            //s_dropdown.value = 0;
            //e_dropdown.value = 0;

            warning.SetActive(true);
            warning_arrows.SetActive(true);
            loading.SetActive(false);
            loadingBox.SetActive(false);
            request.SetActive(false);
            hideTime.SetActive(false);
            tmGuide.SetActive(false);
        }


        else 
        { 
            if(s_dropdown.isActiveAndEnabled == true)
            {                
                request.SetActive(true);
                hideTime.SetActive(true);
            }
                
            warning.SetActive(false);
            warning_arrows.SetActive(false);
        }

        yield return null;
    }

    public void DropdownValueChanged()
    {        
        loading.SetActive(true);
        loadingBox.SetActive(true);
        Request(show, startDates[s_dropdown.value], endDates[e_dropdown.value]);
        
        // If not using UI button to pull data
        /*
        if (last_s_idx != s_dropdown.value)
        {
            //Debug.Log("last_s index: " + last_s_idx + ", current s_index: " + s_dropdown.value);
            //Debug.Log(startDates[s_dropdown.value] + "," + endDates[e_dropdown.value]);

            Request(show, startDates[s_dropdown.value], endDates[e_dropdown.value]);

            last_s_idx = s_dropdown.value;
        }

        if(last_e_idx != e_dropdown.value)
        {
            //Debug.Log("last_e index: " + last_e_idx + ", current e_index: " + e_dropdown.value);
            //Debug.Log(startDates[s_dropdown.value] + "," +  endDates[e_dropdown.value]);

            Request(show, startDates[s_dropdown.value], endDates[e_dropdown.value]);

            last_e_idx = e_dropdown.value;
        }
        */
    }

    void updateDropdownStart(List<string> s_dates)
    {
        s_dropdown.options.Clear();

        foreach (string s_dateOption in s_dates)
        {            
            //Debug.Log("s_dateOption: " + s_dateOption);
            s_dropdown.options.Add(new Dropdown.OptionData(s_dateOption));

        }
    }

    void updateDropdownEnd(List<string> e_dates)
    {
        e_dropdown.options.Clear();

        foreach (string e_dateOption in e_dates)
        {            
            //Debug.Log("e_dateOption: " + e_dateOption);
            e_dropdown.options.Add(new Dropdown.OptionData(e_dateOption));
        }
    }

    private void Update()
    {       
        if (totalScore > maxScr)
        {
            t += Time.deltaTime;
            Debug.Log("t :" + t);

            if (t < 30.0f)
            {
                specialEffect.SetActive(true);
            }

            else { specialEffect.SetActive(false); }
        }
    }

}
