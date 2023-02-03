#include<stdio.h>
#define MAX 10

int inputArray(int arr[])
{
    int size;
    printf("enter the size of array \n");
    scanf("%d",&size);//5
    printf("enter the element in array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    // arr[size]='\0';
    return size;
}
int searchElement(int arr[],int num,int size)
{
    for (int i = 0; i<size; i++)
    {
        if(arr[i]==num)
        {
            printf("found at position %d \n",i);
            return i;
        }
    }
    printf(" %d not found in array \n",num);
    // exit(0);
    return -1;
}

int insertArray(int arr[],int size)
{
    int num,pos;
    printf("enter the number to be inserted \n");
    scanf("%d",&num);
    printf("enter the position at data to be inserted \n");
    scanf("%d",&pos);
    for (int i = size; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    arr[pos - 1] = num;
    // arr[size+1]='\0';
    return ++size;
}
int deleteArray(int arr[],int size)
{
    int num,pos;
    printf("enter the number to be deleted \n");
    scanf("%d",&num);
    pos=searchElement(arr,num,size);
    for (int i = pos; i <=size; i++)
        arr[i]=arr[i+1];
    return --size;
}
void Traverse(int arr[],int size)
{
    printf("the Array is : ");
    for (int i = 0; i<size; i++)
    {
        printf(" %d  ",arr[i]);
    }
}
void update(int arr[],int size)
{
    int replace,num;
    printf("enter the number to be replaced \n");
    scanf("%d",&replace);
    printf("enter the element by which it will replace \n");
    scanf("%d",&num);
    int pos=searchElement(arr,replace,size);
    if (pos != -1)
    {
        arr[pos]=num;
        update(arr,size);
    }
}
int main()
{
    int arr[MAX];
    int size1=inputArray(arr);
    size1=insertArray(arr,size1);
    size1=deleteArray(arr,size1);
    int position=searchElement(arr,3,size1);
    update(arr,size1);
    Traverse(arr,size1);
    return 0;
}
