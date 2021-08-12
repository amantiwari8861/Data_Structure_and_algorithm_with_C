#include<stdio.h>
#define MAX 10

int inputArray(int arr[MAX])
{
    int size;
    printf("enter the size of array \n");
    scanf("%d",&size);//5
    printf("enter the sorted element in array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size]='\0';
    return size;
}
int binarySearch(int arr[], int low, int high, int Selement)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == Selement)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > Selement)
            return binarySearch(arr, low, mid - 1, Selement);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, high, Selement);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
void print(int result)
{
    if(result==-1)
    {
        printf("not found in array!\n");
    }
    else
    {
        printf("found at position %d \n",result+1);
    }
}
int main()
{
    int arr[MAX],size,Selement;
    size=inputArray(arr);
    printf("element to be searched :");
    scanf("%d",&Selement);
    int result=binarySearch(arr,0,size-1,Selement);
    print(result);

    return 0;
}