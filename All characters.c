#include<stdio.h>
int main()
{
	char ch;
	int num;
	float f;
	printf("Enter any character");
	scanf("%c",&ch);
	
	printf("Enter any integer value");
	scanf("%d",&num);
	
	printf("Enter any decimal number");
	scanf("%f",&f);
	
	printf("character  is %c\n,integer value is %d\n decimal number is %f",ch,num,f);
	return 0;
}