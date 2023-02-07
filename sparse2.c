#include <stdio.h>
#define SUB_MAX 10
#define MAX 32

void read_matrix(int a[][SUB_MAX], int row, int column);
void print_sparse(int b[][3]);
void create_sparse(int a[][SUB_MAX], int row, int column, int b[][3]);
void recreateMatrix(int b[][3],int rearr[][SUB_MAX]);

int main()
{
    // if the quantity of non-zeroes is less than 32% then use sparse matrix 
    // 4*100 = 400 bytes
    // 33*4*3 = 396 bytes
    int a[SUB_MAX][SUB_MAX], b[MAX][3], row, column,c[SUB_MAX][SUB_MAX]={0};
    printf("\nEnter the size of matrix (rows, columns): \n");
    scanf("%d%d", &row, &column);

    read_matrix(a, row, column);
    create_sparse(a, row, column, b);
    print_sparse(b);
    recreateMatrix(b,c);
    return 0;
}

void read_matrix(int a[SUB_MAX][SUB_MAX], int row, int column)
{
    int i, j;
    printf("\nEnter elements of matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void create_sparse(int a[SUB_MAX][SUB_MAX], int row, int column, int b[MAX][3])
{
    int i, j, k;
    k = 1;
    b[0][0] = row;
    b[0][1] = column;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;//row 
                b[k][1] = j;//column
                b[k][2] = a[i][j];//value
                k++;//count total no. of values
            }
        }
        b[0][2] = k - 1;
    }
}

void print_sparse(int b[MAX][3])
{
    int i,total = b[0][2];
    printf("\nSparse form - list of 3 triples\n\n");
    printf(" row   column    value \n");
    printf("----   ------    -----\n");
    for (i = 0; i <= total; i++)
    {
        if(i==1)
        {     
            printf("----   ------    -----\n");   
        }
        // printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
        printf("%4d%9d%8d\n", b[i][0], b[i][1], b[i][2]);
    }
}
void recreateMatrix(int b[][3],int rearr[][SUB_MAX])
{
    int row=b[0][0],col=b[0][1],k=1;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (b[k][0]==i && b[k][1]==j)
    //         {
    //             rearr[i][j]=b[k][2];
    //             k++;
    //         }
    //         else
    //         {
    //             rearr[i][j]=0;
    //         }
    //     }
    // }
    for (int i = 1; i <= b[0][2]; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rearr[b[i][0]][b[i][1]]=b[i][2];
        }
    }
    
    printf("the Recovered Array is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d \t",rearr[i][j]);
        }
        printf("\n");
    }

}