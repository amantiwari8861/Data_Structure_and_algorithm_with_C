#include<stdio.h>
void treeRecursion(int num)
{
    if (num>0)
    {
        printf("%d ",num);
        treeRecursion(num-1);
        treeRecursion(num-1);
    }
}
int main()
{
    treeRecursion(3);
    return 0;
}
