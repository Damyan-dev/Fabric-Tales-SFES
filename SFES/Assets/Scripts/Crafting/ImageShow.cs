using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ImageShow : MonoBehaviour
{

    
    public GameObject canvasObject;
   


    public void Start()
    {

        canvasObject.SetActive(true);

       
    }

    void Update()
    {

        if (Input.GetKeyDown("e"))
        {



            canvasObject.SetActive(false);


        }
        if (Input.GetKeyDown("r"))
        {

            canvasObject.SetActive(true);

        }
        }
    }
