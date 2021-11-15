
using UnityEngine;
using System.Collections;

namespace UnityChan
{
	[RequireComponent(typeof(Animator))]
	[RequireComponent(typeof(CapsuleCollider))]
	[RequireComponent(typeof(Rigidbody))]

	public class PlayerMovement : MonoBehaviour
	{

		public float animSpeed = 1.5f;
		public float lookSmoother = 3.0f;
		public bool useCurves = true;
		public float useCurvesHeight = 0.5f;
		public float playerSpeed = 4.0f;
		private CapsuleCollider col;
		private float orgColHight;
		private Vector3 orgVectColCenter;
		private Animator anim;
		private AnimatorStateInfo currentBaseState;

		//static int idleState = Animator.StringToHash("Base Layer.IDLING");
		//static int locoState = Animator.StringToHash("Base Layer.WALKING");

		void Start()
		{
			anim = GetComponent<Animator>();
			col = GetComponent<CapsuleCollider>();
			orgColHight = col.height;
			orgVectColCenter = col.center;
		}


		void FixedUpdate()
		{
			float h = Input.GetAxis("Vertical");
			float v = Input.GetAxis("Horizontal");
			anim.SetFloat("Speed", v);
			anim.SetFloat("Direction", h);
			anim.speed = animSpeed;
			currentBaseState = anim.GetCurrentAnimatorStateInfo(0);

			Vector3 charMovement = new Vector3(h, 0, v);
			transform.Translate(charMovement * (playerSpeed * Time.fixedDeltaTime), Space.World);

			if (charMovement != Vector3.zero)
			{
				anim.SetFloat("Speed", 1);
				transform.forward = charMovement;
			}
			else
			{
				anim.SetFloat("Speed", 0);
			}

            if (Input.GetKeyDown(KeyCode.Q))
            {
				anim.SetBool("Harvest", true);
            } else
            {
				anim.SetBool("Harvest", false);
            }

            
			/*velocity = new Vector3 (0, 0, v);		
			velocity = transform.TransformDirection (velocity);
			if (v > 0.1) {
				velocity *= forwardSpeed;	
			} else if (v < -0.1) {
				velocity *= backwardSpeed;	
			}
				
			transform.localPosition += velocity * Time.fixedDeltaTime; */


			/*if (currentBaseState.fullPathHash == locoState) {
				if (useCurves) {
					resetCollider ();
				}
			}

		else if (currentBaseState.fullPathHash == idleState) {
				if (useCurves) {
					resetCollider ();
				}
			}
		}
		
		void resetCollider ()
		{
			col.height = orgColHight;
			col.center = orgVectColCenter;
		}*/
		}
	}
}