#include<stdio.h>

void printDigit(int num)
{
    if (num>0) //base condition(termination condition)
    {
        printf("num=%d \n",num);
        printDigit(num-1);
    }
    // else
    // {
    //     return;
    // }
}
int main()
{
    int i=10;
    printDigit(i);
    return 0;
}