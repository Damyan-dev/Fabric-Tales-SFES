using System.Collections.Generic;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
	public float playerSpeed = 4.0f;
	private CapsuleCollider col;
	private Animator anim;
	public WashingMachine washingMachine;
	public AudioController audioController;
	public Sheep1 Sheep;
	public DyeMachine dyeMachine;
	Interactor playerInteractor;
	public Loom loom;
	private int nextShear = 0;
	public Text Cooldown;
	public GameObject WMCanvas;
	public GameObject LoomCanvas;
	public GameObject DMCanvas;
	public GameObject cottonItem;

	private void Start()
	{

		anim = GetComponent<Animator>();
		col = GetComponent<CapsuleCollider>();
		playerInteractor = GetComponentInChildren<Interactor>();
		audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
		audioController.PlaySoundComplete("BGM");

	}

	private void Update()
	{
		Cooldown.text = (nextShear - Time.time).ToString();
		if((nextShear - Time.time) < 0)
        {
			Cooldown.text = "0";
        }
		Interact();
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

		/*if (Input.GetKeyDown(KeyCode.E))
		{
			playerInteractor.ItemPickup();
		} */

		if (Input.GetKey(KeyCode.RightBracket))
        {
			TimeController.Instance.Tick();
        }
	}
	private void OnTriggerStay(Collider other)
	{
		/*
		if (other.name == "Loom")
		{
			InteractableObject itemWashed = Inventory.Instance.FindItemByType("Rare Washed");

			if (Input.GetKeyDown(KeyCode.F))
			{

				if (itemWashed != null)
				{
					Inventory.Instance.RemoveItem(itemWashed);
					loom.Spawn();
				}
			}

		}
		if (other.name == "Shearing Sheep")
		{
			if (Input.GetKeyDown(KeyCode.F) && Time.time > nextShear)
			{

				Sheep.Spawn();
				
				nextShear += 100;
				//Cooldown.text = (nextShear - Time.time).ToString();

				//ItemData item = InventoryManager.Instance.ItemSearch("Wool");
				//if (item != null)
				//{
				//	InventoryManager.Instance.ItemRemove(item);
				//	loom.Spawn();
				//}
			}

		}

		if (other.name == "Dye Machine")
		{
			InteractableObject itemShirt = Inventory.Instance.FindItemByType("Rare Shirt");

			if (Input.GetKeyDown(KeyCode.F))
			{


				if (itemShirt != null)
				{
					Inventory.Instance.RemoveItem(itemShirt);
					dyeMachine.Spawn();
				}

			}

		}

		if (other.name == "Washing Machine Rig")
		{
			InteractableObject itemCotton = Inventory.Instance.FindItemByType("Cotton");

			if (Input.GetKeyDown(KeyCode.F) && itemCotton.quantity > 0)
			{
				if (itemCotton != null)
				{
					Inventory.Instance.RemoveItem(itemCotton);
					loom.Spawn();
				}
			}
			
			InteractableObject itemWool = Inventory.Instance.FindItemByType("Wool");

			if (Input.GetKeyDown(KeyCode.F))
			{

				if (itemCotton != null)
				{
					Inventory.Instance.RemoveItem(itemCotton);
				
					
				}
			}
		}
		*/
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

		
