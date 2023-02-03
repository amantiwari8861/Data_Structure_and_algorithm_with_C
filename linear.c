#include<stdio.h>
int main()
{
    int num=0,element,flag=0;
    printf("enter the size of array\n");
    scanf("%d",&num);
    int arr[num];
    printf("enter the element in array \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched \n");
    scanf("%d",&element);

    for (int i = 0; i < num; i++)
    {
        if (element==arr[i])
        {
            printf("found at position %d \n",i);
            flag=1;
            // break;
        }
    }
    if (flag==0)
    {
        printf("element not found in array !\n");
    }
    return 0;
}