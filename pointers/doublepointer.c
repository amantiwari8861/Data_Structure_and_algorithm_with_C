#include<stdio.h>
int main()
{
    int num=50;

    printf(" num= %d \n",num);
    printf(" address of num= %d \n",&num);

    int *ptr;
    ptr=&num; // 1d pointer

    printf("ptr= %d \n",ptr);
    *ptr=99;
    printf(" num= %d \n",num);

    printf("address of ptr = %d \n",&ptr);

    int **dptr;
    dptr=&ptr;

    printf("double pointer value:%d\n",dptr);




    return 0;
}
