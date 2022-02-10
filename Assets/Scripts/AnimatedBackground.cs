using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnimatedBackground : MonoBehaviour
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
        if (currentImage == frames.Length - 1)
        {
            currentImage = 0;
        }
        currentImage += 1;
        background.sprite = frames[currentImage];
    }
}
