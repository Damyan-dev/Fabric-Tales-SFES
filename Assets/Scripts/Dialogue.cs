using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dialogue : MonoBehaviour
{
   // public Text text;
    public Text[] dialogue;
   // string[] dialogues = new string[] { "", "", "" };

    // Start is called before the first frame update
    void Start()
    {
        int dialogue = Random.Range(0, 4);
        Instantiate(this.dialogue[dialogue], this.dialogue[dialogue].transform);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
