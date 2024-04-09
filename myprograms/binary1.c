#include<stdio.h>
void main()
{	
	int arr[5],i;
	printf("Enter the binary no.\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]!=0 && arr[i]!=1)
		{
			printf("please enter a valid input\n");
		}
	}
	
	
}