#include<stdio.h>
void main()
{
	int orig,temp,rem,cube=0;
	printf("enter the no.");
	scanf("%d",&orig);
	temp=orig;
	
	while(orig !=0)
	{
		rem=orig%10;
		cube+=rem*rem*rem;
		orig/=10;
	}
	if(cube==temp)
	{
		printf("the given number is a armstrong no.");
	}
	else
	{
		printf("this is not a armstrong");
	}
}