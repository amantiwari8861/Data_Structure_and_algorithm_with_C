#include<stdio.h>
int main()
{
    int noOfSub;
    float total=0;
    printf("enter no. of sub:");
    scanf("%d",&noOfSub);

    float marks[noOfSub];// array is also a data structure
    for (int i = 0; i < noOfSub; i++)
    {
        printf("enter %d subject mark:",i);
        scanf("%f",&marks[i]);
    }
    for (int i = 0; i < noOfSub; i++)
    {
        total+=marks[i];
    }
    printf("Total :%f \n",total);
    printf(" Percentage %f %% \n",total/noOfSub);
    return 0;
}
