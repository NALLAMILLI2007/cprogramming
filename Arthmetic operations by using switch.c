/*write a C program to perform arthmetic operations using switch*/
#include<stdio.h>
int main()
{
	char op;
	int n1,n2,result;
	printf("Enter any arthmetic operator");
	scanf("%c",&op);
	printf("Enter any two integer numbers");
	scanf("%d%d",&n1,&n2);
	switch(op)
	{
		case'+':
			result = n1+n2;
			printf("\naddition is %d",result);
			//break;
			case'-':
			result = n1-n2;
			printf("\nsubtraction is %d",result);
			//break;
			case'*':
			result = n1*n2;
			printf("\nmultipication is %d",result);
			//break;
			case'/':
			result = n1/n2;
			printf("\ndivision is %d",result);
			//break;
			case'%':
			result = n1%n2;
			printf("\nmodulus is %d",result);
			//break;
			default:printf("\nPlease enter only the arthmetic operators +-*/%");
			
	}
	
}