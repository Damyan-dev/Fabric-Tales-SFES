using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropInteractionMenu : MonoBehaviour
{
    private Animator anim;
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
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Watered);
            LoseHealth(5);
        }
    }

    public void TillField()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Farm);
        }
    }

    public void PlantCotton()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null)
        {
            selectedField.CottonSeed();
        }
    }

    public void PlantElderberry()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null)
        {
            selectedField.ElderberrySeed();
        }
    }

    public void PlantTurmeric()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null)
        {
            selectedField.TurmericSeed();
        }
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
