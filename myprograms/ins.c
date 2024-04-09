#include<stdio.h>

void main()
{	//insertion sort
	int size,i,j,temp;
	printf("enter the size of the array");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\n\t Array after insertion sort:");
	for(i=0;i<size;i++)
	{
		printf(" ");
		printf("%d",arr[i]);
	}
}