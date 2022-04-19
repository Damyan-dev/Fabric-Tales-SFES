using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    public GameObject MenuCanvas;

    // Start is called before the first frame update
    public void OpenMenu()
    {
        MenuCanvas.SetActive(true);

    }

    public void CloseMenu()
    {
        MenuCanvas.SetActive(false);
    }

    public void BackToMain()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void Quit()
    {
        Application.Quit();
    }
}
