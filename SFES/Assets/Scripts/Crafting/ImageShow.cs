using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ImageShow : MonoBehaviour
{

    
    public GameObject canvasObject;
   


    public void Start()
    {

        canvasObject.SetActive(false);

       
    }

    void Update()
    {
        if (Input.GetKeyDown("e"))
        {



            canvasObject.SetActive(true);


        }
        if (Input.GetKeyDown("r"))
        {

            canvasObject.SetActive(false);

        }
    }
}
