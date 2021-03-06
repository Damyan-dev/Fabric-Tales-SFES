using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CropInteractionMenu : MonoBehaviour
{
    private Animator anim;
    public HealthBar healthBar;
    public int maxHealth = 50;
    public int currentHealth;
    public GameObject EndCanvas;
    public GameObject WinCanvas;
    public Button tillButton;
    public Button fertilizeButton;
    public Button plantCottonButton;
    public Button plantElderberryButton;
    public Button plantTurmericButton;
    public Button plantFCottonButton;
    public Button plantFElderberryButton;
    public Button plantFTurmericButton;
    private AudioController audioController;

    public void Start()
    {
        EndCanvas.SetActive(false);
        WinCanvas.SetActive(false);
        currentHealth = 25;
        healthBar.SetMaxHealth(maxHealth);
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
        anim = GetComponent<Animator>();
        tillButton.interactable = true;
        fertilizeButton.interactable = true;
        plantCottonButton.interactable = false;
        plantElderberryButton.interactable = false;
        plantTurmericButton.interactable = false;
        plantFCottonButton.interactable = false;
        plantFElderberryButton.interactable = false;
        plantFTurmericButton.interactable = false;
        CheckInventory();
    }

    public void Update()
    {
        CheckInventory();
    }

    public void CheckInventory()
    {
        var cottonSeedCheck = Inventory.Instance.FindItemByType("Cotton Seed");
        if (cottonSeedCheck.itemType != null && cottonSeedCheck.quantity >= 1)
        {
            plantCottonButton.interactable = true;
            plantFCottonButton.interactable = true;
        }
        else
        {
            plantCottonButton.interactable= false;
            plantFCottonButton.interactable = false;
        }

        var cottonESeedCheck = Inventory.Instance.FindItemByType("Elderberry Seed");
        if (cottonESeedCheck.itemType != null && cottonESeedCheck.quantity >= 1)
        {
            plantElderberryButton.interactable = true;
            plantFElderberryButton.interactable = true;
        }
        else
        {
            plantElderberryButton.interactable = false;
            plantFElderberryButton.interactable = false;
        }

        var cottonTSeedCheck = Inventory.Instance.FindItemByType("Turmeric Seed");
        if (cottonTSeedCheck.itemType != null && cottonTSeedCheck.quantity >= 1)
        {
            plantTurmericButton.interactable = true;
            plantFTurmericButton.interactable = true;
        }
        else
        {
            plantTurmericButton.interactable = false;
            plantFTurmericButton.interactable = false;
        }
    }
    public void Fertilize()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            if (selectedField.farmStatus == Farmland.FarmStatus.Dirt)
            {
                LoseHealth(5);
                audioController.PlaySoundComplete("Fertilize");
            }

            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Watered);
         
        }
    }

    public void TillField()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Farm);
            audioController.PlaySoundComplete("Till");
        }
    }

    public void PlantCotton()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Farm);
            audioController.PlaySoundComplete("Till");
            selectedField.CottonSeed();
            if(selectedField.cropPlanted != null)
            {
                GainHealth(1);
            }
        }
    }

    public void PlantFertilizedCotton()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Watered);
            audioController.PlaySoundComplete("Fertilize");
            selectedField.CottonSeed();
            if (selectedField.cropPlanted != null)
            {
                LoseHealth(5);
            }
        }
    }

    public void PlantElderberry()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Farm);
            audioController.PlaySoundComplete("Till");
            selectedField.ElderberrySeed();
            if (selectedField.cropPlanted != null)
            {
                GainHealth(1);
            }
        }
    }

    public void PlantFertilizedElderberry()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Watered);
            audioController.PlaySoundComplete("Fertilize");
            selectedField.ElderberrySeed();
            if (selectedField.cropPlanted != null)
            {
                LoseHealth(5);
            }
        }
    }

    public void PlantTurmeric()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Farm);
            audioController.PlaySoundComplete("Till");
            selectedField.TurmericSeed();
            if (selectedField.cropPlanted != null)
            {
                GainHealth(1);
            }
        }
    }

    public void PlantFertilizedTurmeric()
    {
        var selectedField = Interactor.Instance.selectedFarmLand;
        CheckInventory();
        if (selectedField != null && selectedField.cropPlanted == null)
        {
            selectedField.ChangeFarmStatus(Farmland.FarmStatus.Watered);
            audioController.PlaySoundComplete("Fertilize");
            selectedField.TurmericSeed();
            if (selectedField.cropPlanted != null)
            {
                LoseHealth(5);
            }
        }
    }

    public void GainHealth(int health)
    {
        currentHealth += health;
        healthBar.SetHealth(currentHealth);
        if (currentHealth == 50)
        {
            Debug.Log("Environment is healthy");
            WinCanvas.SetActive(true);
        }
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
