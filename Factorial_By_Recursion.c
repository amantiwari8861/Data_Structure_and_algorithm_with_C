#include<stdio.h>
//recursion : when a function call it itself it is called recursion
int factorial(int num)
{  
    if (num>0)
    {
        return ( num*factorial(num-1) );
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num=0;
    //new branch text
    printf("enter the no. \n");
    scanf("%d",&num);
    int result=factorial(num);
    printf("the result is %d \n",result);
    return 0;
}