using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarnTrigger : MonoBehaviour
{

    public GameObject barnOutside = null;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            barnOutside.SetActive(false);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            barnOutside.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
