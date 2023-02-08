#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;//4 byte
};
int main()
{
    printf("size of node %d \n",sizeof(struct Node));//4 byte

    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=100;

    // printf("the dat in node is %d \n",ptr->data);
    printf("the address of node is %d \n",ptr);

    struct Node *ptr2;
    ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr2->data=209;

    // printf("the dat in node is %d \n",ptr2->data);
    printf("the address of node is %d \n",ptr2);

    return 0;
}
