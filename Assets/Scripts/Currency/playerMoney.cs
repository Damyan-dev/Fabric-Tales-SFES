using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class playerMoney : MonoBehaviour
{

    public int money;
    public Text moneyText;

    // Start is called before the first frame update
    void Start()
    {
        money = 100;
        moneyText.text = money.ToString();
    }

    public void addMoney(int moneyToAdd)
    {
        money += moneyToAdd;
        moneyText.text = money.ToString();
    }

    public void subtractMoney(int moneyToSubtract)
    {
        if(money - moneyToSubtract < 0)
        {
            Debug.Log("not enough money");
        }
        else
        {
            money -= moneyToSubtract;
            moneyText.text = money.ToString();
        }
    }

}
