#include <stdio.h>
#define SUB_MAX 10
#define MAX 20

void read_matrix(int a[SUB_MAX][SUB_MAX], int row, int column);
void print_sparse(int b[MAX][3]);
void create_sparse(int a[SUB_MAX][SUB_MAX], int row, int column, int b[MAX][3]);

int main()
{
    int a[SUB_MAX][SUB_MAX], b[MAX][3], row, column;
    printf("\nEnter the size of matrix (rows, columns): \n");
    scanf("%d%d", &row, &column);

    read_matrix(a, row, column);
    create_sparse(a, row, column, b);
    print_sparse(b);
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
            // printf("[%d][%d]: ", i, j);
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
    int i, column;
    column = b[0][2];
    printf("\nSparse form - list of 3 triples\n\n");
    printf("row    column  values \n");
    printf("---   -----    ----\n");
    for (i = 0; i <= column; i++)
    {
        if(i==1)
        printf("---   -----    ----\n");
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}
//h.w deletion insertion updation in array