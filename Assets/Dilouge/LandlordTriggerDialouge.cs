using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LandlordTriggerDialouge : MonoBehaviour
{
    public string[] dialogue = { "Word A", "Word B" };
    public TMP_Text text;
    public GameObject Canvas;
    // Start is called before the first frame update
    void Start()
    {
        Canvas.SetActive(false);
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            Debug.Log("entered");
           
            Canvas.SetActive(true);
            // log whatever comes out of the RandomWord string.
            string dialogueToDisplay = Randomdialogue();

            text.text = dialogueToDisplay;

        }
    }
    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            
            Canvas.SetActive(false);
        }
    }
    // when you see a string function,
    // it will return a string that
    // you can use anywhere!
    private string Randomdialogue()
    {
        // grab a random string from the words array
        string randomdialogue = dialogue[Random.Range(0, dialogue.Length)];

        // return it (this will be the string that the script will use)
        return randomdialogue;
    }
}
