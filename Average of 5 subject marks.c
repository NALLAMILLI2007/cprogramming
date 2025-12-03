/*write a C program to print the average of five subject marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("Enter five subjects marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5.0;
	printf("\nThe average is %f",avg);
}