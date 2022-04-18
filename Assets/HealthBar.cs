using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using UnityEngine.Rendering.PostProcessing;

public class HealthBar : MonoBehaviour
{
    public Slider slider;
    public GameObject gameOver;
    public GameObject gameComplete;
    public GameObject badEnvironment;
    public GameObject averageEnvironment;
    public PostProcessVolume volume;
    public PostProcessProfile profile1;
    public PostProcessProfile profile2;
    public PostProcessProfile profile3;

    private void Start()
    {
        volume = GameObject.Find("Volume").GetComponent<PostProcessVolume>();
        volume.profile = profile2;
    }




        private void Update()
    {
        if (slider.value == 0)
        {
            gameOver.SetActive(true);
            Time.timeScale = 0;
        }

        if(slider.value <= 15)
        {
            badEnvironment.SetActive(true);
            //AverageEnvironment.SetActive(false);
            volume.profile = profile3;


        }
        if (slider.value > 15 && slider.value <= 30)
        {
            averageEnvironment.SetActive(true);
            badEnvironment.SetActive(false);
            volume.profile = profile2;
        }
        if (slider.value > 30)
        {
            averageEnvironment.SetActive(false);
            badEnvironment.SetActive(false);
            volume.profile = profile1;

        }
        if (slider.value == 50)
        {
            gameComplete.SetActive(true);
        }
        
    }
    public void SetMaxHealth(int health)
    {
        slider.maxValue = health;
        
    }

    public void SetHealth(int health)
    {
        slider.value = health;
    }
}
