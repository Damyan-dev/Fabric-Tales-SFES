using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteractButtons : MonoBehaviour
{
    public HealthBar healthBar;
    public int maxHealth = 50;
    public int currentHealth = 25;
    public GameObject EndCanvas;

    public void Start()
    {
        EndCanvas.SetActive(false);
        healthBar.SetHealth(currentHealth);
    }

    public void UseFertiliser()
    {
        currentHealth -= 5;
        healthBar.SetHealth(currentHealth);
    }



    public void GainHealth(int health)
    {
        currentHealth = currentHealth + health;
        healthBar.SetHealth(currentHealth);
    }


}
