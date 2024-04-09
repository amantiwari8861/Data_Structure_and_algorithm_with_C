#include<stdio.h>
int main()
{
    int matr1[3][3],count=0;
    printf("enter the matrix \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&matr1[i][j]);
            if (matr1[i][j] != 0)
            {
                count++;
            }
        }
    }
    int sparse[count+1][3];
    int k=1;
    sparse[0][0]=4;
    sparse[0][1]=4;
    sparse[0][2]=count;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matr1[i][j] != 0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=matr1[i][j];
                k++;
            }
        }   
    }
    printf("the matrix is :\n");
    for (int i = 0; i < count+1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf(" %d \t",sparse[i][j]);
        }
        printf("\n");
    }
    return 0;
}