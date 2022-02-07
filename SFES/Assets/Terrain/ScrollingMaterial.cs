using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
public class ScrollingMaterial : MonoBehaviour
{
	public float Speed;

	float _uvFactor;
	Material _materialToScroll;

	void Awake()
	{
		_materialToScroll = GetComponent<MeshRenderer>().material;
		float n = _materialToScroll.GetTextureScale("_MainTex").y;
		float scale = transform.localScale.z;
		_uvFactor = n / scale;
	}

	void Update()
	{
		_materialToScroll.mainTextureOffset = new Vector2(_materialToScroll.mainTextureOffset.x, _materialToScroll.mainTextureOffset.y + Time.deltaTime * Speed * _uvFactor);
	}
}
