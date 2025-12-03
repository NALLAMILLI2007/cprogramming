/*write a C program to find the area of circle*/
#include<stdio.h>
#include<math.h>
int main()
{
	const float pi=3.14;
	float r,a;
	printf("Enter radius of the circle");
	scanf("%f",&r);
	a=pi*r*r;
	printf("Area of the circle=%2f\n",a);
}