using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class Credits : MonoBehaviour
{

    public Sprite[] frames;
    public Image background;
    public float frameRate = 0.1f;

    private int currentImage;

    void Start()
    {
        currentImage = 0;
        InvokeRepeating("ChangeImage", 0.1f, frameRate);
    }

    private void ChangeImage()
    {
        currentImage += 1;
        background.sprite = frames[currentImage];

        if (currentImage == frames.Length - 1)
        {
            SceneManager.LoadScene("MainMenu");
            CancelInvoke("ChangeImage");

        }
    }
}
