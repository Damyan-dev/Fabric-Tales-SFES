using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarnTrigger : MonoBehaviour
{
    private AudioController audioController;
    public GameObject barnOutside = null;

    public void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            Debug.Log("entered");
            audioController.PlaySoundComplete("Barn");
            barnOutside.SetActive(false);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            audioController.PlaySoundComplete("Barn");
            barnOutside.SetActive(true);
        }
    }

}
