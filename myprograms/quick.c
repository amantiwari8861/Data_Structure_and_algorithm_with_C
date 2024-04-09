#include<stdio.h>

void quicksort(int a[],int low,int high);
void swap(int a[],int k,int l);

void swap(int a[],int k,int l)
{
	int temp;
	temp=a[k];
	a[k]=a[l];
	a[l]=temp;
}

void quicksort(int a[],int low,int high)
{
	int pivot,i,j;
	if(low>high)
		return ;
	i=low+1;
	j=high;
	pivot=a[low];
	while(i<=j)
	{
		while(a[i]<=pivot && i<=high)
		{
			i++;
		}
		while(a[j]>pivot && j>=low)
		{
			j--;
		}
		if(i<j)
		{
			swap(a,i,j);
		}
	}
	if(low<j)
	{
		
		swap(a,low,j);
	}
	quicksort(a,low,j-1);
	quicksort(a,j+1,high);
}

int main()
{
	int a[10];
	printf("enter the array element\n");
	for(int k=0;k<5;k++)
	{
		scanf("%d",&a[k]);
	}
	quicksort(a,0,4);
	for(int k=0;k<5;k++)
	{
		printf("%d\t",a[k]);
	}
	return 0;
}