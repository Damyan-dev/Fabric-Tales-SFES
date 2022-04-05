using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dialogue : MonoBehaviour
{
    public string[] dialogue = { "Word A", "Word B" };
    public Text text;

    private void Start()
    {
        // log whatever comes out of the RandomWord string.
        string dialogueToDisplay = Randomdialogue();

        text.text = dialogueToDisplay;
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
