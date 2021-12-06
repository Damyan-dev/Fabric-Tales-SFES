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
        if (Input.GetKeyDown("c"))
        {
            canvasObject.SetActive(true);
        }
        if (Input.GetKeyUp("c"))
        {

            canvasObject.SetActive(false);

        }
    }
}
