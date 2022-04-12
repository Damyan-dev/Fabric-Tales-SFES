using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropInteractionMenu : MonoBehaviour
{
    private Animator anim;
    Farmland farmLand;
    public HealthBar healthBar;
    public int maxHealth = 50;
    public int currentHealth;
    public GameObject EndCanvas;

    public void Start()
    {
        EndCanvas.SetActive(false);
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);
        anim = GetComponent<Animator>();
    }

  
    public void Fertilize()
    {
        LoseHealth(5);
    }

    public void PlantCotton()
    {
        farmLand.CottonSeed();
    }

    public void PlantElderberry()
    {

    }

    public void PlantTumeric()
    {

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
        if (currentHealth == 0)
        {
            Debug.Log("Environment damaged beyond repair");
            EndCanvas.SetActive(true);
        }
    }
}
