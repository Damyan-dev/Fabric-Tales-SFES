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
    GameTimeConverter timeWatered;
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
    CropParams cropPlanted = null;


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
                break;
            case FarmStatus.Watered:
                materialToSwitch = wateredMat;
                timeWatered = TimeController.Instance.GetTimeStamp();
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

        if (selectedField.selectedFarmLand != null)
        {
            if (cottonInv.cottonSeed && farmStatus == FarmStatus.Dirt && cropPlanted == null && cottonInv.quantity > 0)
            {
                GameObject cropObject = Instantiate(cropPrefab, transform);
                cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
                cropPlanted = cropObject.GetComponent<CropParams>();
                cropPlanted.Plant(cottonInv);
                Debug.Log(cropPlanted + " has been planted.");
                Objtext.text = "Now use the watering can in your inventory to water the planted crop";
                Inventory.Instance.RemoveItem(cottonInv.itemType, 1);
            }
        }
    }

    public void ElderberrySeed()
    {
        if (seedData.elderberrySeed && farmStatus == FarmStatus.Dirt && cropPlanted == null)
        {
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.Plant(seedData);
            Debug.Log(cropPlanted + " has been planted.");
            Objtext.text = "Now use the watering can in your inventory to water the planted crop";
            Inventory.Instance.RemoveItem(seedData);
        }
        else
        {
            Debug.Log(seedData + " has not been found");
        }
    }

    public void TumericSeed()
    {
        if (seedData.tumericSeed && farmStatus == FarmStatus.Dirt && cropPlanted == null)
        {
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropObject.transform.position = new Vector3(transform.position.x, 15.35f, transform.position.z);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.Plant(seedData);
            Debug.Log(cropPlanted + " has been planted.");
            Objtext.text = "Now use the watering can in your inventory to water the planted crop";
            Inventory.Instance.RemoveItem(seedData);
        }
    }

    public void ClockUpdate(GameTimeConverter gametime)
    {
        if(farmStatus == FarmStatus.Watered)
        {
            int hoursPassed = GameTimeConverter.CompareTime(timeWatered, gametime);
            Debug.Log(hoursPassed + " since the crop was watered.");

            if (cropPlanted != null)
            {
                cropPlanted.Grow();
            }

            if(hoursPassed > 24)
            {
                ChangeFarmStatus(FarmStatus.Farm);
            }
        }
    }
}
