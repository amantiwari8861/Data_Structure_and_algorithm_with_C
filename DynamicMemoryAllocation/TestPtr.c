#include<stdio.h>
#include<stdlib.h>

void fxn1(int** ptr)
{
    printf("address of ptr is %d and value is %d  %d %d \n",&ptr,ptr,*ptr,**ptr);
}


int main()
{
    int *num1=(int*)malloc(sizeof(int));
    *num1=100;
    printf("address of num is %d and value is %d \n",&num1,num1);
    // fxn1(num1);
    fxn1(&num1);
    return 0;
}
