#include<stdio.h>
#define PI 3.1416
float areaOfCircle(float radius){
	float area=PI*radius*radius;
	return area;
}
float main(){
	float r;
	printf("Enter radius of a circle:\n");
	scanf("%f",&r);
	printf("Area of circle is =%.2f",areaOfCircle(r));
}
