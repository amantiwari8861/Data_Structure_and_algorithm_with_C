#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

struct Node
{
    int data;
    struct Node *next;
}*topElement;

void push()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL)
    {
        printf("unable to allocate Memory\n");
        return;
    }
    printf("enter data in node:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;

    if(topElement==NULL)
    {
        topElement=newNode;
    }
    else
    {
        newNode->next=topElement;
        topElement=newNode;
    }
    printf("%d pushed into stack\n",newNode->data);
}
void pop()
{
    struct Node* temp=topElement;
    if(temp==NULL)
    {
        printf("no element in stack to pop\n");
        return;
    }
    topElement=topElement->next;
    printf("%d popped from stack\n",temp->data);
    free(temp);
}
void peek()
{
    printf("%d is at the top\n",topElement->data);
}
void printStack(){
    struct Node* cn=topElement;
    printf("the stack element is :[");
    while (cn!=NULL)
    {
        printf("%d",cn->data);
        if (cn->next!=NULL)
        {
            printf(",");
        }
        cn=cn->next;
    }
    printf("]\n");
}

int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. push node in stack\n");
        printf("2. print stack\n");
        printf("3. pop from stack\n");
        printf("4. peek in stack\n");
        printf("0. choice\n");

        printf("enter ur choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            printStack();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        case 0:
            exit(0);
            break;
        default:printf("invalid choice!\n");
            break;
        }
        printf("press any key to continue...");
        getch();
    } while (choice!=0);
    
    return 0;
}