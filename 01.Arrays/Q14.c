// 14. Write a C program to find the common elements between two arrays (string values).
// 12. Write a C program to find the duplicate values of an array of integer values.
#include<stdio.h>
int main()
{
    char arr1[]={"Hello There My"};
    char arr2[]="Name is Aman Tiwari";

    int arr[]={1,2,3,4,5};
    printf("%d ",sizeof(arr));

    int len1=sizeof(arr1)/sizeof(char);
    int len2=sizeof(arr2)/sizeof(char);
    int min=len1<len2?len1:len2;
    char common[min];
    int commonLen=0;

    printf("array 1 size:%d \n",len1);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            // printf("comparing %c with %c \n",arr1[i],arr2[j]);
            if(arr1[i]==arr2[j])
            {
                common[commonLen]=arr1[i];
                commonLen++;
                printf("adding %c in resultant array\n",arr1[i]);
                break;
            }
        }
    }
    printf("the common elements are :[");
    for (int i = 0; i < commonLen; i++)
    {
        printf("%c",common[i]);
        if (i<commonLen-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}
