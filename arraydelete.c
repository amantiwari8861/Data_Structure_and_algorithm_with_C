#include<stdio.h>
#define MAX 10

int inputArray(int arr[MAX])
{
    int size;
    printf("enter the size of array \n");
    scanf("%d",&size);//5
    printf("enter the element in array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size]='\0';
    return size;
}
int searchElement(int arr[MAX],int num)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
}
void deleteArray(int arr[MAX],int size)
{
    int num,pos;
    printf("enter the number to be deleted \n");
    scanf("%d",&num);
    pos=searchElement(arr,num);
    for (int i = pos; i <=size; i++)
        arr[i]=arr[i+1];
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
    deleteArray(arr,size1);
    printArray(arr);
    return 0;
}
