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
void bubbleSort(int arr[],int size)
{
    for (int pass = 1; pass <= size-1; pass++)
    {
        for (int j = 0; j <= size-1-pass; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[])
{
    printf("the Array is : ");
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf(" %d  ",arr[i]);
    }
}
int main()
{
    int arr[MAX],size;
    size=input(arr);
    bubbleSort(arr,size);
    printArray(arr);
    return 0;
}
