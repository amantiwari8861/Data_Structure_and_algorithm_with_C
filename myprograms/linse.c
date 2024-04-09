#include<stdio.h>

void main()
{
	int se,temp,n=0;
	printf("enter the elements u want to store\n ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in the array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("enter the element u want to search\n");
	scanf("%d",&se);
	
	for(int i=0;i<n;i++)
	{
		if(se==arr[i])
		{
			printf("the element is present on %dth position\n",i);
			temp=1;
		}
	}
	if(temp!=1)
	{
		printf("the element is not present in this array\n");
	}
}