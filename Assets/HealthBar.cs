using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using UnityEngine.Rendering.PostProcessing;

public class HealthBar : MonoBehaviour
{
    public Slider slider;
    public GameObject BadEnvironment;
    public GameObject AverageEnvironment;
    public PostProcessVolume volume;
    public PostProcessProfile Profile1;
    public PostProcessProfile Profile2;
    public PostProcessProfile Profile3;

    private void Start()
    {
        volume = GameObject.Find("Volume").GetComponent<PostProcessVolume>();
        volume.profile = Profile2;
    }




        private void Update()
    {
        if(slider.value <= 15)
        {
            BadEnvironment.SetActive(true);
            //AverageEnvironment.SetActive(false);
            volume.profile = Profile3;


        }
        if (slider.value > 15 && slider.value <= 30)
        {
            AverageEnvironment.SetActive(true);
            BadEnvironment.SetActive(false);
            volume.profile = Profile2;
        }
        if (slider.value > 30)
        {
            AverageEnvironment.SetActive(false);
            BadEnvironment.SetActive(false);
            volume.profile = Profile1;

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
