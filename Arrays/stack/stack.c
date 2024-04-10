#include<stdio.h>
#define MAX 10

int top=-1;
void add(int stack[],int num)
{
    if (top==MAX-1)
    {
        printf("stack is full !!\n");
        return;
    }
    stack[++top]=num;
}
void printStack(int stack[])
{
    printf("the stack is :\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");   
}

int main()
{
    int stack[MAX];

    add(stack,70);
    add(stack,80);
    add(stack,10);

    printStack(stack);

    return 0;
}
