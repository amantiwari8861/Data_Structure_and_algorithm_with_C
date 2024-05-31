#include<stdio.h>
int main()
{
    int num,key,isFound=0;
    printf("enter the size of array\n");
    scanf("%d",&num);
    int arr[num];
    printf("enter the element in array \n");
    for (int i = 0; i < num; i++)
        scanf("%d",&arr[i]);
    printf("enter the key to be searched \n");
    scanf("%d",&key);
    for (int i = 0; i < num; i++)
    {
        if (key==arr[i])
        {
            printf("found at position %d \n",i);
            isFound=1;
        }
    }
    if (isFound==0)
    {
        printf("%d not found in array\n",key);
    }
   return 0;
}