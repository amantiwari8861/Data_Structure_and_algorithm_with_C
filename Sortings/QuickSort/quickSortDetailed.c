#include <stdio.h>
#define MAX 10
// int input(int arr[])
// {
//     int size=0;
// printf("enter the size of array \n");
// scanf("%d",&size);
// printf("enter the elements in array\n");
// for (int i = 0; i < size; i++)
// {
//     scanf("%d",&arr[i]);
// }
//     return size;
// }

void swap(int a[], int k, int l)
{
	int temp;
	temp = a[k];
	a[k] = a[l];
	a[l] = temp;
}
void printArray(int arr[], int size)
{
	printf("Array: [");
	for (int i = 0; i < size; i++)
	{
		printf(" %d ", arr[i]);
		if (i<size-1)
			printf(",");
	}
	printf("]\n");
}
void quicksort(int a[], int low, int high)
{
	printf("low =%d high=%d \n",low,high);
	int pivot, i, j;
	if (low > high) //Base Condition
	{	
		printf("both arrow crossed i.e low(%d) is greater than high(%d) \n",low,high);
		return;
	}
	i = low + 1;
	j = high;
	pivot = a[low];
	printf("Now Pivot is :%d \n", pivot);
	while (i <= j)
	{
		while (a[i] <= pivot && i <= high) //searching bigger value than pivot from left to right
		{
			printf("LTR : %d < %d \n", a[i], pivot);
			i++;
		}
		while (a[j] > pivot && j >= low) //searching smaller value than pivot from right to left
		{
			printf("RTL: %d > %d \n", a[j], pivot);
			j--;
		}
		if (i < j)
		{
			printf("swapping a[%d] with a[%d] \n", i, j);
			swap(a, i, j);
			printArray(a, 8);
		}
	}
	if(j<i)
	{
		printf("breaking the list \n");
	}
	if (low < j)
	{
		printf(" %d swapped with %d \n", a[low], a[j]);
		swap(a, low, j);
		printArray(a, 8);
	}
	quicksort(a, low, j - 1);
	quicksort(a, j + 1, high);
}
int main()
{
	int arr[] = {28, 55, 46, 38, 16, 89, 83, 30}, size = 8;
	// size=input(arr);
	// swap(arr,3,5);// testing functions
	printf("The unsorted Array is :");
	printArray(arr, 8);// testing functions
	quicksort(arr, 0, size - 1);// arr ->Array, 0 -> lowest index ,size-1 -> highest index
	printArray(arr, size);
	return 0;
}
