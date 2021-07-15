#include<stdio.h>
#define MAX 10
int inputArray(int arr[MAX])
{
    int size;
    printf("enter the size of array \n");
    scanf("%d",&size);
    printf("enter the element in array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size]='\0';
    return size;
}
void insertArray(int arr[MAX],int size)
{
    int num,pos;
    printf("enter the number to be inserted \n");
    scanf("%d",&num);
    printf("enter the position at data to be inserted \n");
    scanf("%d",&pos);
    for (int i = size; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    arr[pos - 1] = num;
}
void printArray(int arr[MAX])
{
    printf("the Array is : ");
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf(" %d  ",arr[i]);
    }
}
int main()
{
    int arr[MAX];
    int size1=inputArray(arr);
    insertArray(arr,size1);
    printArray(arr);
    return 0;
}
