#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX 10

int top=-1;
void push(int stack[],int num)
{
    if (top==MAX-1)
    {
        printf("stack is full !!\n");
        return;
    }
    stack[++top]=num;
    printf("pushed into stack\n");
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
void pop(int stack[])
{
    stack[top--]=-1;
    printf("popped an element!\n");
}
void peek(int stack[])
{
    printf("at top the element is %d \n",stack[top]);
}
int main()
{
    int stack[MAX],choice,temp;

    // push(stack,70);
    // push(stack,80);
    // push(stack,10);
    // pop(stack);
    // peek(stack);
    // printStack(stack);

    do
    {
        system("cls");
        printf("1.push element into stack\n");
        printf("2.pop element from stack\n");
        printf("3.peek into stack\n");
        printf("4.print stack\n");
        printf("0.exit\n");
        printf("enter ur choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("enter a value to push:");
            scanf("%d",&temp);
            push(stack,temp);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            printStack(stack);
            break;
        case 0:
            printf("Thank You!!");
            exit(0);
            break;
        
        default:printf("invalid choice!!");
            break;
        }
        printf("press any key to continue....");
        getch();
    } while (choice!=0);
    


    return 0;
}
