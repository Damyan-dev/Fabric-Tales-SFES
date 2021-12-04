using System.Collections.Generic;
using UnityEngine;
using System.Collections;

     public  class PlayerController : MonoBehaviour
	{
		public float playerSpeed = 4.0f;
		private CapsuleCollider col;
		private Animator anim;

		Interactor playerInteractor;
		private void Start()
		{
			anim = GetComponent<Animator>();
			col = GetComponent<CapsuleCollider>();
			playerInteractor = GetComponentInChildren<Interactor>();
		}

        private void Update()
        {
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
					playerInteractor.Interact();
				}
			}
		}

		private IEnumerator HarvestRoutine()
		{
			anim.SetBool("harvesting", true);
			anim.SetInteger("state", 2);
			yield return new WaitForSeconds(1);
			anim.SetInteger("state", 0);
			anim.SetBool("harvesting", false);
		}
	}
