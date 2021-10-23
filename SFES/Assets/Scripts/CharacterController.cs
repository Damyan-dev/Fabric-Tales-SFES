using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterController : MonoBehaviour
{
    [SerializeField] float movementSpeed = 2.0f;
    protected Rigidbody2D rb2d;
    protected Vector2 movement;

    private void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }

    private void FixedUpdate()
    {
        rb2d.MovePosition(rb2d.position + movement * movementSpeed * Time.fixedDeltaTime);
    }
}
