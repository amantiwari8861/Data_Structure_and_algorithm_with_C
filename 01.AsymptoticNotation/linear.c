#include<stdio.h>
int main()
{
    int num,key,flag=0;
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
            flag=1;
            // break;
        }
    }
    if (flag==0)
        printf("key not found in array !\n");
    return 0;
}
// 