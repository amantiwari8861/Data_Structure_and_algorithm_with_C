#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} *head,*tail;
void addLast()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter data:");
    scanf("%d",&newNode->data);

    newNode->prev=NULL;
    newNode->next=NULL;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        printf("list created!\n");
    }
    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
        printf("node added at last!\n");
    }
}
void printList() {
       
    struct Node *cn=head;
    printf("The list is :[");
    while (cn!=NULL)
    {
        printf("%d",cn->data);
        if (cn->next!=NULL)
            printf(",");      
        cn=cn->next;
    }
    printf("]\n");
}
void addAtPos() 
{
    int pos;
    struct Node *cn=head;
    printf("enter position:");
    scanf("%d",&pos);
    struct Node *newNode=malloc(sizeof(struct Node));
    printf("enter data :");
    scanf("%d",&newNode->data);

    for (int i = 1; i < pos; i++)
    {
        if (pos-1==i)
        {
            printf("adding after %d :\n",cn->data);
            newNode->next=cn->next;
            cn->next->prev=newNode;
            cn->next=newNode;
            newNode->prev=cn;
            printf("node added succesfully at %d \n",pos);
        }
        cn=cn->next;
    }
}
void deleteFirst() {}
void deleteLast() {}
void deleteAtPos() {
    
}
void printReverseList() {

    struct Node *cn=tail;
    printf("The reversed list is :[");
    while (cn!=NULL)
    {
        printf("%d",cn->data);
        if (cn->prev!=NULL)
            printf(",");      
        cn=cn->prev;
    }
    printf("]\n");
    
}
int main()
{
    char ch;
    int choice;
    int i = 0;
    do
    {
        system("cls");
        printf("\n\t\t------ Doubly Linked List Program -------\n");
        printf("\t\t\t1.Add Node \n");
        printf("\t\t\t2.Print List \n");
        printf("\t\t\t3.Add at Position \n");
        printf("\t\t\t4.Delete from First \n");
        printf("\t\t\t5.Delete from Last \n");
        printf("\t\t\t6.Delete from pos \n");
        printf("\t\t\t7.print Reverse list \n");
        printf("\t\t\t8.Reverse list \n");
        printf("\t\t\t0.Exit \n");

        printf("\n\t\t\tEnter choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addLast();
            break;
        case 2:
            printList();
            break;
        case 3:
            addAtPos();
            break;
        case 4:
            deleteFirst();
            break;
        case 5:
            deleteLast();
            break;
        case 6:
            deleteAtPos();
            break;
        case 7:
            printReverseList();
            break;
        case 0:
            exit(0);
            break;

        default:
            printf("invalid choice!!");
            break;
        }
        fflush(stdin);
        // system("clear"); for linux only
        printf("\nPress Enter to continue....");
        scanf("%c", &ch);
    } while (ch == '\n');
    getch();
    return 0;
}