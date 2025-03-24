using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touch : MonoBehaviour {
	float Vel_rot = 20;
	void OnMouseDrag(){
		float rotX = Input.GetAxis("Mouse X")*Vel_rot*Mathf.Deg2Rad;
		float rotY = Input.GetAxis("Mouse Y")*Vel_rot*Mathf.Deg2Rad;

		transform.Rotate(Vector3.up, -rotX, Space.World);
		transform.Rotate(Vector3.up, rotY, Space.World);
	}
	
}