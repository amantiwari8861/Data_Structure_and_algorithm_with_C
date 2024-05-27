#include<stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *ptr;//an empty pointer is declared
//     ptr=malloc(1*sizeof(int));//we provided 4 bytes memory to ptr

//     *(ptr+0)=100;//here we set the value at address

//     printf("the value is %d \n",*(ptr+0));
//     return 0;
// }

int main()
{
    // int a=10;
    // printf("%d\n",&a);


    int *ptr;//an empty pointer is declared
    ptr=(int*)malloc(5*sizeof(int));//we provided 4 bytes memory to ptr

    // printf("%d \n",ptr);
    // printf("%d \n",(ptr+0));
    // printf("%d \n",(ptr+1));

    *(ptr+0)=100;//here we set the value at address
    *(ptr+1)=101;//here we set the value at address
    *(ptr+2)=102;//here we set the value at address
    *(ptr+3)=103;//here we set the value at address
    *(ptr+4)=104;//here we set the value at address

    for (int i = 0; i < 5; i++)
    {
        printf("the address is %d \n",*(ptr+i));
    }

    free(ptr);    

    for (int i = 0; i < 5; i++)
    {
        printf("the address is %d \n",*(ptr+i));
    }
    return 0;
}