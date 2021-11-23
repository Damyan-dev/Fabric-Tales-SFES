using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }
    [Header("Tools")]
    public ItemData[] tool = new ItemData[8];
    public ItemData equippedTool = null;

    [Header("Items")] 
    public ItemData[] items = new ItemData[8];
    public ItemData equippedItem = null;

}


