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
            printf("found at position %d \n",i);
            return i;
        }
    }
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
    arr[size+1]='\0';
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
void Traverse(int arr[MAX])
{
    printf("the Array is : ");
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf(" %d  ",arr[i]);
    }
}
void update(int arr[MAX])
{
    int replace,num;
    printf("enter the number to be replaced \n");
    scanf("%d",&replace);
    printf("enter the element by which it will replace \n");
    scanf("%d",&num);
    int pos=searchElement(arr,replace);
    arr[pos]=num;
}
int main()
{
    int arr[MAX];
    int size1=inputArray(arr);
    // deleteArray(arr,size1);
    // insertArray(arr,size1);
    // int position=searchElement(arr,3);
    update(arr);
    Traverse(arr);
    return 0;
}
