#include<stdio.h>
#define MAX 10  //

int inputArray(int arr[MAX]) //call by reference(address)
{
    int size;
    printf("enter the size of array \n");
    scanf("%d",&size);//5
    printf("enter the sorted element in array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    return size;
}
int binarySearch(int arr[], int low, int high, int key)
{
    if (high >= low)  //base condition
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
  
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
  
        return binarySearch(arr, mid + 1, high, key);
    }
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
void printArray(int arr[],int size)
{
    printf("The array is :[");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]\n");    
}
int main()
{
    int arr[MAX],size,key;
    // printArray(arr,MAX);
    size=inputArray(arr);
    // printArray(arr,size);
    printf("enter element to be searched :");
    scanf("%d",&key);
    // int result=binarySearch(arr,0,size-1,key);
    // print(result);
    return 0;
}

// input an array from user and square it's element's value using function and add all the elements in main function

/* 
take an array of size 5 from user and make a menu driven program in which there is following options:
1.square all elements of array
2.cube all elements in array
3.divide by 2 all elements in array
after taking choice from user add all the elements of array and print the result use functions for all individual tasks

let arr=[1,2,3,4]
choice:2
arr=[1,8,27,64]
sum :1+8+27+64 => 100 Ans.
*/