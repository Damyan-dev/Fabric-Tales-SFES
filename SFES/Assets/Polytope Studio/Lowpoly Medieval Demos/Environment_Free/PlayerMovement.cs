using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class PlayerMovement : MonoBehaviour
{
    [SerializeField] float movementSpeed = 2.0f;
    private Vector3 movement;


    private void Awake()
    {

    }

    private void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }

    private void FixedUpdate()
    {
        transform.Translate(new Vector3(movement.x, 0, movement.y) * (movementSpeed * Time.deltaTime));

    }
}