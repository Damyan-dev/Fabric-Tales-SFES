using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Ink.Runtime;
using UnityEngine.EventSystems;

public class DilougeManager : MonoBehaviour
{
    // Start is called before the first frame update
    [Header("Dialouge UI")]
    [SerializeField] private GameObject dialougepanel;
    [SerializeField] private TextMeshProUGUI dialougeText;
    [Header("Ink JSON")]
    [SerializeField] private TextAsset inkJSON;
    [Header("Choices UI")]
    [SerializeField] private GameObject[] choices;
    private TextMeshProUGUI[] choicesText; 
    private Story CurrentStory;
    private bool dialougeIsPlaying;
    private static DilougeManager instance;

    private void Start()
    {
        dialougeIsPlaying = true;
        dialougepanel.SetActive(true);
        EdnterDialougeMode(inkJSON);

        choicesText = new TextMeshProUGUI[choices.Length];
        int index = 0;
        foreach (GameObject choice in choices)
        {
            choicesText[index] = choice.GetComponentInChildren<TextMeshProUGUI>();
            index++;
        }
    }

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogWarning("More than one Dialouge Manager in the Scene");
        }
        instance = this;
    }

    public static DilougeManager GetInstance()
    {
        return instance;
    }

    

    public void EdnterDialougeMode(TextAsset inkJSON)
    {
        CurrentStory = new Story(inkJSON.text);

        ContinueStory();

       
    }
    private void Update()
    {
        if (!dialougeIsPlaying)
        {
            return;
        }
        if (CurrentStory.currentChoices.Count == 0 && Input.GetMouseButtonDown(0))
        {
            ContinueStory();
        }
    }


    public void ExitDialougeMode()
    {
        dialougeIsPlaying = false;
        dialougepanel.SetActive(false);
        dialougeText.text = "";

    }


    private void ContinueStory()
    {
        if (CurrentStory.canContinue)
        {
            dialougeText.text = CurrentStory.Continue();
            DisplayChoices();
        }
        else
        {
            ExitDialougeMode();
        }
    }

    private void DisplayChoices()
    {
        List<Choice> currentChoices = CurrentStory.currentChoices;
        int index = 0; 
        foreach(Choice choice in currentChoices)
        {
            choices[index].gameObject.SetActive(true);
            choicesText[index].text = choice.text;
            index++;
        }

        for (int i = index; i < choices.Length; i++)
        {
            choices[i].gameObject.SetActive(false);
        }
        StartCoroutine(SelectFirtsChoice());
    }

    private IEnumerator SelectFirtsChoice()
    {
        EventSystem.current.SetSelectedGameObject(null);
        yield return new WaitForEndOfFrame();
        EventSystem.current.SetSelectedGameObject(choices[0].gameObject);

    }

    public void MakeChoice(int choiceIndex)
    {
        CurrentStory.ChooseChoiceIndex(choiceIndex);
        ContinueStory();
    }
    // Update is called once per frame

}
