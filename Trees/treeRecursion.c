#include<stdio.h>

// void print(int data)
// {
//     if (data!=0)
//     {
//         printf(" %d ",data);
//         print(data-1);
//         printf("\n");
//         print(data-1);
//     } 
//     else
//     {
//         return;
//     }
// }
// int main()
// {
//     print(5);   
//     return 0;
// }

void TreeRecursion(int n) 
{
    if (n >= 0) 
    {
       printf("%d\n", n);
       TreeRecursion(n - 1);
       TreeRecursion(n - 1);
    }
}
int main() 
{
    int x = 3; 
    TreeRecursion(x);
    return 0;
}