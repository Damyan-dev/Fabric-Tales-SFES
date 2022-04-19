using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BadEnd : MonoBehaviour
{
    public HealthBar healthBar;
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
            Application.Quit();
            CancelInvoke("ChangeImage");
            
        }    
    }
}
