using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Farmland : MonoBehaviour, ITimeTracker
{
    public GameObject selected;
    public GameObject cropPopUpMenu;
    public Transform dropPosition;
    public Material dirtMat, farmMat, wateredMat;
    public Text Objtext;
    GameTimeConverter timePlanted;
    InteractableObject seedData;
    private Interactor selectedField;
    

    public enum FarmStatus
    {
        Dirt, Farm, Watered
    }
    public FarmStatus farmStatus;

    private new Renderer renderer;

    [Header("Crops")]
    public GameObject cropPrefab;
    public CropParams cropPlanted = null;


    void Start()
    {
        renderer = GetComponent<Renderer>();
        ChangeFarmStatus(FarmStatus.Dirt);
        Selected(false);
        TimeController.Instance.InitTracker(this);
    }

    public void ChangeFarmStatus(FarmStatus farmToSwitch)
    {
        farmStatus = farmToSwitch;
        Material materialToSwitch = dirtMat;

        switch (farmToSwitch)
        {
            case FarmStatus.Dirt:
                materialToSwitch = dirtMat;

                break;
            case FarmStatus.Farm:
                materialToSwitch = farmMat;
                timePlanted = TimeController.Instance.GetTimeStamp();

                break;
            case FarmStatus.Watered:
                materialToSwitch = wateredMat;
                timePlanted = TimeController.Instance.GetTimeStamp();

                break;
        }

        renderer.material = materialToSwitch;
    }

    public void Selected(bool toggle)
    {
        selected.SetActive(toggle);
        cropPopUpMenu.SetActive(toggle);
    }

    public void CottonSeed()
    {
        InteractableObject cottonInv = Inventory.Instance.FindItemByType("Cotton Seed");

        
            if (cottonInv.cottonSeed && farmStatus == FarmStatus.Farm && cropPlanted == null && cottonInv.quantity >= 1)
            {
            Debug.Log("planted");
                GameObject cropObject = Instantiate(cropPrefab, transform);
                cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
                cropPlanted = cropObject.GetComponent<CropParams>();
                cropPlanted.Plant(cottonInv);
                Debug.Log(cropPlanted + " has been planted.");               
                Inventory.Instance.RemoveItem(cottonInv.itemType, 1);

            }

        if (cottonInv.cottonSeed && farmStatus == FarmStatus.Watered && cropPlanted == null && cottonInv.quantity >= 1)
        {
            Debug.Log("planted");
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.PlantFertilized(cottonInv);
            Debug.Log(cropPlanted + " has been planted.");
            Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
        }

    }

    public void ElderberrySeed()
    {
        InteractableObject cottonInv = Inventory.Instance.FindItemByType("Elderberry Seed");


        if (cottonInv.elderberrySeed && farmStatus == FarmStatus.Farm && cropPlanted == null && cottonInv.quantity >= 1)
        {
            Debug.Log("planted");
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.Plant(cottonInv);
            Debug.Log(cropPlanted + " has been planted.");
            Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
        }

        if (cottonInv.elderberrySeed && farmStatus == FarmStatus.Watered && cropPlanted == null && cottonInv.quantity >= 1)
        {
            Debug.Log("planted");
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.PlantFertilized(cottonInv);
            Debug.Log(cropPlanted + " has been planted.");
            Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
        }
    }

    public void TurmericSeed()
    {
        InteractableObject cottonInv = Inventory.Instance.FindItemByType("Turmeric Seed");


        if (cottonInv.turmericSeed && farmStatus == FarmStatus.Farm && cropPlanted == null && cottonInv.quantity >= 1)
        {
            Debug.Log("planted");
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.Plant(cottonInv);
            Debug.Log(cropPlanted + " has been planted.");
            Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
        }

        if (cottonInv.turmericSeed && farmStatus == FarmStatus.Watered && cropPlanted == null && cottonInv.quantity >= 1)
        {
            Debug.Log("planted");
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.PlantFertilized(cottonInv);
            Debug.Log(cropPlanted + " has been planted.");
            Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
        }
    }

    public void ClockUpdate(GameTimeConverter gametime)
    {
        if(farmStatus == FarmStatus.Farm && cropPlanted != null)
        {
            cropPlanted.Grow();
            int hoursPassed = GameTimeConverter.CompareTime(timePlanted, gametime);
            
            if(hoursPassed > 13)
            {
                cropPlanted = null;
                ChangeFarmStatus(FarmStatus.Dirt);
                
            }
        }

        if(farmStatus == FarmStatus.Watered && cropPlanted != null)
        {
            cropPlanted.GrowFertilized();
            int hoursPassedFertilized = GameTimeConverter.CompareTime(timePlanted, gametime);
            
            if (hoursPassedFertilized > 7)
            {
                cropPlanted = null;
                ChangeFarmStatus(FarmStatus.Dirt);
                

            }
        }
    }
}
