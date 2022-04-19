using System.Collections.Generic;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
	public float playerSpeed = 4.0f;
	private CapsuleCollider col;
	private Animator anim;
	public AudioController audioController;
	Interactor playerInteractor;
	public Text Cooldown;
	public GameObject WMCanvas;
	public GameObject LoomCanvas;
	public GameObject DMCanvas;
	public GameObject SheepCanvas;
	public GameObject cottonItem;
	


    public void Start()
	{

		anim = GetComponent<Animator>();
		col = GetComponent<CapsuleCollider>();
		playerInteractor = GetComponentInChildren<Interactor>();
		audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
		audioController.PlaySoundComplete("BGM");
		GetPolyester();
		GetCottonSeed();
		GetElderberrySeed();
		GetTurmericSeed();
	}

	private void Update()
	{
		if (Input.GetKey(KeyCode.RightBracket))
		{
			TimeController.Instance.Tick();
		}
	}

	private void FixedUpdate()
	{
		Move();
	}



	private void Move()
	{
		float h = Input.GetAxis("Vertical");
		float v = Input.GetAxis("Horizontal");

		Vector3 charMovement = new Vector3(h, 0, v);
		transform.Translate(charMovement * (playerSpeed * Time.fixedDeltaTime), Space.World);

		if (charMovement != Vector3.zero)
		{
			if (anim.GetBool("harvesting") == true)
			{
				return;
			} else if (anim.GetBool("harvesting") == false)
			{
				anim.SetBool("walking", true);
				anim.SetInteger("state", 1);
				transform.forward = charMovement;
			}
		}
		else
		{
			anim.SetBool("walking", false);
			anim.SetInteger("state", 0);
		}
	}

	public void Interact()
	{
		if (Input.GetKey(KeyCode.Q))
		{
			if (anim.GetBool("walking") == true)
			{
				anim.SetBool("walking", false);
				anim.SetInteger("state", 0);
			}
			else if (anim.GetBool("walking") == false)
			{
				StartCoroutine(HarvestRoutine());
			}
		}

		if (Input.GetKey(KeyCode.RightBracket))
        {
			TimeController.Instance.Tick();
        }
	}

	private void OnTriggerEnter(Collider other)
	{
		if (other.name == "Washing Machine Rig")
		{
			WMCanvas.SetActive(true);
		}

		if (other.name == "Loom")
		{
			LoomCanvas.SetActive(true);
		}

		if(other.name == "Dye Machine")
        {
			DMCanvas.SetActive(true);
        }

		if (other.name == "Shearing Sheep")
		{
			SheepCanvas.SetActive(true);
		}
	}


	private void OnTriggerExit(Collider other)
	{
		if (other.name == "Washing Machine Rig")
		{
			WMCanvas.SetActive(false);
		}

		if (other.name == "Loom")
		{
			LoomCanvas.SetActive(false);
		}

		if (other.name == "Dye Machine")
		{
			DMCanvas.SetActive(false);
		}
		if (other.name == "Shearing Sheep")
		{
			SheepCanvas.SetActive(false);
		}
	}

	public void GetPolyester()
    {
		var polyesterItem = Inventory.Instance.FindItemByType("Polyester");
		if (polyesterItem.itemType != null && polyesterItem.inventory && polyesterItem.quantity >= 0)
        {
			Inventory.Instance.AddItem(polyesterItem.itemType, 2);
		}
	}

	public void GetCottonSeed()
    {
		var cottonSeedItem = Inventory.Instance.FindItemByType("Cotton Seed");
		if (cottonSeedItem.itemType != null && cottonSeedItem.inventory && cottonSeedItem.quantity >= 0)
        {
			Inventory.Instance.AddItem(cottonSeedItem.itemType, 2);
		}
	}

	public void GetElderberrySeed()
    {
		var elderberrySeedItem = Inventory.Instance.FindItemByType("Elderberry Seed");
		if (elderberrySeedItem.itemType != null && elderberrySeedItem.inventory && elderberrySeedItem.quantity >= 0)
        {
			Inventory.Instance.AddItem(elderberrySeedItem.itemType, 2);
		}
	}

	public void GetTurmericSeed()
    {
		var turmericSeedItem = Inventory.Instance.FindItemByType("Turmeric Seed");
		if (turmericSeedItem.itemType != null && turmericSeedItem.inventory && turmericSeedItem.quantity >= 0)
        {
			Inventory.Instance.AddItem(turmericSeedItem.itemType, 2);
		}
	}

	public IEnumerator HarvestRoutine()
		{
			anim.SetBool("harvesting", true);
			anim.SetInteger("state", 2);
			yield return new WaitForSeconds(1);
			anim.SetInteger("state", 0);
			anim.SetBool("harvesting", false); 
		}
	}

		
