
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShopTrigger : MonoBehaviour
{

    public GameObject barnOutside = null;
    public GameObject ShopkeeperCanvas;
    public GameObject[] canvasToDisable;
    public string[] dialogue = { "Word A", "Word B" };
    public TMP_Text text;
    private AudioController audioController;

    // Start is called before the first frame update
    void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
        barnOutside.SetActive(true);
        ShopkeeperCanvas.SetActive(false);

    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            Debug.Log("entered");
            audioController.PlaySoundComplete("Shop");
            barnOutside.SetActive(false);
            ShopkeeperCanvas.SetActive(true);
            // log whatever comes out of the RandomWord string.
            string dialogueToDisplay = Randomdialogue();

            text.text = dialogueToDisplay;

        }
    }
    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            audioController.PlaySoundComplete("Shop");
            barnOutside.SetActive(true);
            ShopkeeperCanvas.SetActive(false);
            canvasToDisable[0].SetActive(false);
            canvasToDisable[1].SetActive(false);
            canvasToDisable[2].SetActive(false);
            canvasToDisable[3].SetActive(false);
            canvasToDisable[4].SetActive(false);

        }
    }
    private string Randomdialogue()
    {
        // grab a random string from the words array
        string randomdialogue = dialogue[Random.Range(0, dialogue.Length)];

        // return it (this will be the string that the script will use)
        return randomdialogue;
    }

}
