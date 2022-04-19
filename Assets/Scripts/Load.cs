using UnityEngine;
using UnityEngine.SceneManagement;
class Load : MonoBehaviour
{
    
    public void Mainmenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
    public void MainGame()
    {
        SceneManager.LoadScene("FinalLevel");
    }
    public void Options()
    {
        SceneManager.LoadScene("Options");
    }
    public void Quit()
    {
        Application.Quit();
    }
    public void Credits()
    {
        SceneManager.LoadScene("Credits");
    }
}
