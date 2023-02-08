#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
}*start;
int main()
{
    int min,max;
    printf("enter minimum & maximum range :\n ");
    scanf("%d%d",&min,&max);

    for (int num = min; num <= max; num++)
    {
        int isNotPrime=0;
        for (int i = 2; i < num/2; i++)
        {
            if (num%i==0)
            {
                isNotPrime=1;
                break;
            }            
        }
        if(!isNotPrime)
        {
            printf(" Prime No. %d \n",num);
        }

    }   

    return 0;
}
