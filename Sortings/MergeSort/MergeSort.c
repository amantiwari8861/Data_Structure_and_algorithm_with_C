#include <stdio.h>

void printArray(int A[], int low, int size)
{
    printf("[");
    for (int i = low; i <= size; i++)
    {
        printf("%d", A[i]);
        if (i < size)
        {
            printf(",");
        }
    }
    printf("]\n");
}

// Merges two subarrays of arr[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int arr[], int left, int mid, int right)
{
    // Calculate sizes of subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;
    printf("subarray 1 size (%d) subarray2 size(%d) \n", n1, n2);
    printArray(arr, left, right);

    // Create temp arrays
    int leftArr[n1], rightArr[n2];

    // Copy data to temp arrays leftArr[] and rightArr[]
    printf("\nleft array:");
    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[left + i];
        printf("%d ", leftArr[i]);
    }
    printf("\nright array:");
    for (int j = 0; j < n2; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
        printf("%d", rightArr[j]);
    }
    printf("\n");
    // Merge the temp arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if there are any
    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if there are any
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
    printf("the merged array is :");
    printArray(arr,left,right);
}

// begin is for left index and end is right index of the sub-array of arr to be sorted
void mergeSort(int arr[], int begin, int end)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    printf("Mid=%d \n", mid);
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}

int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, 0, n - 1);
    printf("\n");

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array is \n");
    printArray(arr, 0, n - 1);
    return 0;
}