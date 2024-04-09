#include<stdio.h>
void main()
{
	int arr[10],i;
	printf("enter the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",arr[i]);
	
	 //for(i=0;i<10;i++)
		if(arr[i]==2)
		{
			printf("2 is found");
		}
		else
		{
			printf("2 not found");
		}
	}
}