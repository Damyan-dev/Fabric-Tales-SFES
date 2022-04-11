using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WelcomeDilougeTrigger : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject IntoScreen;
    [Header("Ink JSON")]
    [SerializeField] private TextAsset inkJSON;

    void Start()
    {
        StartIntro();
    }

    // Update is called once per frame
    public void StartIntro()
    {
        DilougeManager.GetInstance().EdnterDialougeMode(inkJSON);


    }
}
