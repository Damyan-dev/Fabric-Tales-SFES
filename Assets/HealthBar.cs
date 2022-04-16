using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    public Slider slider;
    public GameObject BadEnvironment;
    public GameObject AverageEnvironment;


    private void Update()
    {
        if(slider.value <= 15)
        {
            BadEnvironment.SetActive(true);
            //AverageEnvironment.SetActive(false);

        }
        if (slider.value > 15 && slider.value <= 30)
        {
            AverageEnvironment.SetActive(true);
            BadEnvironment.SetActive(false);
        }
        if (slider.value > 30)
        {
            AverageEnvironment.SetActive(false);
            BadEnvironment.SetActive(false);
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
