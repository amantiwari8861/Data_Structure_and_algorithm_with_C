#include<stdio.h>

// void change(int val)//pass by value (primitive data type)
// {
//     val=99;
//     printf("val= %d in change Fxn \n",val);
// }
// int main()
// {
//     int val;
//     change(val);
//     printf("Val = %d in main fxn\n",val);
//     return 0;
// }
void change(int arr[]) //non-primitive data type uses pass by reference
{
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
}
int main()
{
    int arr[3];
    printf("arr[0]=%d before\n",arr[0]);
    printf("arr[1]=%d before\n",arr[1]);
    printf("arr[2]=%d before\n",arr[2]);
    change(arr);
    printf("arr[0]=%d after\n",arr[0]);
    printf("arr[1]=%d after\n",arr[1]);
    printf("arr[2]=%d after\n",arr[2]);
    return 0;
}