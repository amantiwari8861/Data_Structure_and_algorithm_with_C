#include<stdio.h>

void printArr(int len,int arr[])
{
    printf("[");
    for (int i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
        if (i<len-1)
        {
            printf(",");
        }
    }
    printf("]\n");
}

int main()
{
    int arr[]={70,80,30,10,20};
    // int arr[]={4,3,2,10,12,1,5,6};
    int len=sizeof(arr)/sizeof(int);
    int pivot,j;
    printf("The unsorted array is :");
    printArr(len,arr);
    for (int i = 1; i < len; i++)
    {
        pivot=arr[i];
        printf("pivot=%d at i=%d \n",pivot,i);
        j=i-1;
        while (j>=0 && arr[j]>pivot)
        {
            arr[j+1]=arr[j];
            j--;
            printf("\t");
            printArr(len,arr);
        }
        arr[j+1]=pivot;
        printf("final array is :");
        printArr(len,arr);
    }
    printf("the sorted array is :");
    printArr(len,arr);

    return 0;
}
