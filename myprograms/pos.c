#include<stdio.h>

void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	
	if(num<0)
	{
				printf("the given input is a negative number\n");
	}
	else if(num>0)
	{
			printf("the given input is a positive number\n");	
	}
	else if(num==0)
	{
				printf("the given input is zero\n");
	}
	else
	{
		printf("invalid input\n");
	}
}