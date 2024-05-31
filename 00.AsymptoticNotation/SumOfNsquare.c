#include<stdio.h>
int main()
{
    int n,sum=0;// 1 time
    printf("enter the no.:");// 1 time
    scanf("%d",&n);// 1 time

    for (int i = 1; i <= n; i++)  // n times
    {
        printf(" %d * %d = %d\n",i,i,i*i); // n times
        sum+=i*i; // n times
    }
    printf("\nthe sum is :%d \n",sum); // 1 time
    return 0;
}
// 3n + 4 => n => O(n)
