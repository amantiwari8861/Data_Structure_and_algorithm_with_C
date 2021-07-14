#include<stdio.h>
int main()
{
    int matr1[3][3],count=0;
    printf("enter the matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr1[i][j]);
            if (matr1[i][j] != 0)
            {
                count++;
            }
        }
    }
    int sparse[3][count];
    int k;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matr1[i][j] != 0)
            {
                sparse[0][k]=i;
                sparse[1][k]=j;
                sparse[2][k]=matr1[i][j];
                k++;
            }
        }   
    }
    printf("the matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < count; j++)
        {
           printf(" %d \t",sparse[i][j]);
        }
        printf("\n");
    }
    return 0;
}