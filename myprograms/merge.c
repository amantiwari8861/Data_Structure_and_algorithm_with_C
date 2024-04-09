#include<stdio.h>
void mergesort(int arr[],int low,int high);

int b[5],mid,low,high,i,j,k;
void mergesort(int arr[],int low,int high)
{
	if(low>=high)
		return;
		mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
	while(i>mid&&j>high)
	{
		i=low;
		j=mid+1;
		k=low;
	if(arr[i]<=arr[j])
	{
		b[k]=arr[i];
		i++;
	}
	else
	{
		b[k]=arr[j];
		j++;
	}
	while(j>high)
	{
		b[k]=arr[j];
		j++;
		k++;
	}
	while(i>mid)
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	}
}

int main()
{
	int arr[10];
	printf("enter the array element\n");
	for(int k=0;k<5;k++)
	{
		scanf("%d",&arr[k]);
	}

	 mergesort(arr,0,4);
	
	for(int k=0;k<5;k++)
	{
		printf("%d\t",arr[k]);
	}
	return 0;
}