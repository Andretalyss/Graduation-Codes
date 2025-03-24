using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
 	Vector3 FirstPoint;
	Vector3 SecondPoint;
 	float xAngle;
 	float yAngle;
	float zAngle;
 	float xAngleTemp;
 	float yAngleTemp;
	float zAngleTemp;

 	void Start () {
   	  xAngle = 0;
   	  yAngle = 0;
	  zAngle = 0;
   	  this.transform.rotation = Quaternion.Euler(yAngle, xAngle, zAngle);        
	 }
 
 	void Update () {
     		if(Input.touchCount > 0){
         		if(Input.GetTouch(0).phase == TouchPhase.Began){
            			FirstPoint = Input.GetTouch(0).position;
            			xAngleTemp = xAngle;
             			yAngleTemp = yAngle;
				zAngleTemp = zAngle;
         		}

         		if(Input.GetTouch(0).phase == TouchPhase.Moved){
            			SecondPoint = Input.GetTouch(0).position;
             			xAngle = xAngleTemp + (SecondPoint.x - FirstPoint.x) * 180 / Screen.width;
             			yAngle = yAngleTemp + (SecondPoint.y - FirstPoint.y) * 90 / Screen.height;
				zAngle = zAngleTemp + (SecondPoint.z - FirstPoint.z) * 180/ Screen.width;
            	 		this.transform.rotation = Quaternion.Euler(yAngle, xAngle, zAngle);
         		}
    		 }
     
 	}
}
