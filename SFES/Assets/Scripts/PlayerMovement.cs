
using UnityEngine;
using System.Collections;

namespace UnityChan
{
	[RequireComponent(typeof(Animator))]
	[RequireComponent(typeof(CapsuleCollider))]
	[RequireComponent(typeof(Rigidbody))]

	public class PlayerMovement : MonoBehaviour
	{
		public float playerSpeed = 4.0f;
		private CapsuleCollider col;
		private Animator anim;


		private void Start()
		{
			anim = GetComponent<Animator>();
			col = GetComponent<CapsuleCollider>();
		}

        private void Update()
        {
			Harvest();
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
		
		private void Harvest()
        {
            if (Input.GetKey(KeyCode.Q))
            {
				if(anim.GetBool("walking") == true)
                {
					anim.SetBool("walking", false);
					anim.SetInteger("state", 0);
				}
				else if (anim.GetBool("walking") == false)
                {
					StartCoroutine(HarvestRoutine());
				}
			}
        }
		IEnumerator HarvestRoutine()
		{
			anim.SetBool("harvesting", true);
			anim.SetInteger("state", 2);
			yield return new WaitForSeconds(1);
			anim.SetInteger("state", 0);
			anim.SetBool("harvesting", false);
		}
	}
}