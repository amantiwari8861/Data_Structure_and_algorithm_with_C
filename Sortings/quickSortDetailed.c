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
	printf("New Array: ");
	for (int i = 0; i < size; i++)
	{
		printf(" %d  ", arr[i]);
	}
	printf("\n");
}

void quicksort(int a[], int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;
	i = low + 1;
	j = high;
	pivot = a[low];
	printf("Now Pivot is :%d \n", pivot);
	while (i <= j)
	{
		while (a[i] <= pivot && i <= high)
		{
			printf(" %d < %d \n", a[i], pivot);
			i++;
		}
		while (a[j] > pivot && j >= low)
		{
			printf(" %d > %d \n", a[j], pivot);
			j--;
		}
		if (i < j)
		{
			printf("swapping a[%d] with a[%d] \n", i, j);
			swap(a, i, j);
			printArray(a, 8);
		}
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
	printArray(arr, 8);
	quicksort(arr, 0, size - 1);
	printArray(arr, size);
	return 0;
}
