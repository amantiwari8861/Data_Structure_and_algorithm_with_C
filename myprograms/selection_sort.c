#include<stdio.h>
void main()
{
	int n,arr[100],j,t,i,min_index;
	
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the elements of an array\n");
	for(j=0;j<n;j++)
	scanf("%d",&arr[j]);
	
	for(j=0;j<=n-2;j++)
	{
		min_index=j;	
		for(i=j+1;i<=n-1;i++)
		{
			if(arr[i]<arr[min_index])
			{
				min_index=i;
			}
		}
			t=arr[j];
			arr[j]=arr[min_index];
			arr[min_index]=t;
	}
	printf("the sorted array is\n");
		for(j=0;j<n;j++)
		{
			printf("%d\n",arr[j]);
		}
}