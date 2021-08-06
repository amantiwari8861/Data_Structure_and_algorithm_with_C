#include<stdio.h>
#define MAX 10
int input(int arr[])
{
    int size=0;
    printf("enter the size of array \n");
    scanf("%d",&size);
    
    printf("enter the elements in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    return size;
}

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
void printArray(int arr[],int size)
{
    printf("the Array is : ");
    for (int i = 0; i<size; i++)
    {
        printf(" %d  ",arr[i]);
    }
}
int main()
{
    int arr[MAX],size;
    size=input(arr);
	quicksort(arr,0,size-1);
    printArray(arr,size);
    return 0;
}
