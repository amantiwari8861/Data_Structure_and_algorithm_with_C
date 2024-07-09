#include<stdio.h>
void swap(int arr[],int l,int r)
{
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
int main()
{
    int left,right;
    int arr[]={59,81,99,75,86,90};
    int size=sizeof(arr)/sizeof(int);

    for (left=0,right=size-1; left<right; left++,right--)
    {
        swap(arr,left,right);
    }
    printf("the reversed array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
