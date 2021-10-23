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
        SceneManager.LoadScene("TestEnvironment");
    }
    public void Options()
    {
        SceneManager.LoadScene("Options");
    }
    public void Quit()
    {
        Application.Quit();
    }
    public void YSelect()
    {
        SceneManager.LoadScene("YSelect");
    }
    public void Map1Fight()
    {
        SceneManager.LoadScene("Demo2");
    }
    public void Controls()
    {
        SceneManager.LoadScene("Controls");
    }
    public void MapSelect()
    {
        SceneManager.LoadScene("MapSelect");
    }
    public void PS()
    {
        SceneManager.LoadScene("PS");
    }
    public void Map1Select()
    {
        SceneManager.LoadScene("Map1Select");
    }
    public void Map2Select()
    {
        SceneManager.LoadScene("Map2Select");
    }
    public void Map2Fight()
    {
        SceneManager.LoadScene("Demo3");
    }
    public void HumanStory1()
    {
        SceneManager.LoadScene("Human story1");
    }
    public void HumanStory2()
    {
        SceneManager.LoadScene("Human story2");
    }
    public void HumanStory3()
    {
        SceneManager.LoadScene("Human story3");
    }
    public void HumanStory4()
    {
        SceneManager.LoadScene("Human story4");
    }
    public void InfectedStory1()
    {
        SceneManager.LoadScene("Infected story1");
    }
    public void InfectedStory2()
    {
        SceneManager.LoadScene("Infected story2");
    }
    public void InfectedStory3()
    {
        SceneManager.LoadScene("Infected story3");
    }
}
