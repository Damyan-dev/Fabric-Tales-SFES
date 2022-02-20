using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClockExample : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject theDisplay;
    public int hour;
    public int minutes;
    void Awake()
    {
        hour = System.DateTime.Now.Hour;
        minutes = System.DateTime.Now.Minute;
        theDisplay.GetComponent<Text>().text = "" + hour + ":" + minutes;
    }

    // Update is called once per frame
    void Update()
    {
        hour = System.DateTime.Now.Hour;
        minutes = System.DateTime.Now.Minute;
        theDisplay.GetComponent<Text>().text = "" + hour + ":" + minutes;
    }
   
}
