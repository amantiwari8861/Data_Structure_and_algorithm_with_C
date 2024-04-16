#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*head,*tail;

void addNode()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL)
    {
        printf("unable to allocate memory!\n");
    }
    
    newNode->next=NULL;
    printf("enter data in node:");
    scanf("%d",&newNode->data);

    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=tail->next;
    }
    printf("node added!!\n");
}
void printList()
{
    struct Node *cn;
    cn=head;
    printf("The Values in List is :[");
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
        printf("1. Add node in list\n");
        printf("2. print list\n");
        printf("0. choice\n");

        printf("enter ur choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            addNode();
            break;
        case 2:
            printList();
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
