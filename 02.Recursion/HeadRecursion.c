#include<stdio.h>

void printDigit(int num)
{
    if (num>0)
    {
        printDigit(num-1);
        printf("num=%d \n",num);
    }
}
int main()
{
    int i=10;
    printDigit(i);
    return 0;
}