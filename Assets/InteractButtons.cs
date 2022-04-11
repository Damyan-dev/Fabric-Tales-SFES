using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteractButtons : MonoBehaviour
{
    public HealthBar healthBar;
    public int maxHealth = 50;
    public int currentHealth;
    public GameObject EndCanvas;

    public void Start()
    {
        EndCanvas.SetActive(false);
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);
    }

    public void UseFertiliser()
    {
        LoseHealth(5);
    }

    public void HarvestCrop()
    {
        GainHealth(1);
    }

    public void GainHealth(int health)
    {
        currentHealth = currentHealth + health;
        healthBar.SetHealth(currentHealth);
    }

    public void LoseHealth(int damage)
    {
        currentHealth -= damage;
        healthBar.SetHealth(currentHealth);
        if(currentHealth == 0)
        {
            Debug.Log("Environment damaged beyond repair");
            EndCanvas.SetActive(true);
        }
    }
}
