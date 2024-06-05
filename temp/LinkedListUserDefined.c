#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;//self referencial pointer
}*head=NULL,*tail=NULL;
void addNode()
{
    // printf("adding node..\n");
    // Dynamic memory allocation
    // printf("size of one object of Node =%d \n",sizeof(struct Node));
    struct Node *newNode=malloc(sizeof(struct Node));
    printf("enter the data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        printf("List created!\n");
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
        printf("node added succesfully at last!\n");
    }
}
void printLL()
{
    printf("List :[");
    struct Node *cn=head;
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
void addAtBeginning()
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    // int a=(int)'B';
    printf("enter the data:");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
    printf("added at beggining succesfully!\n");
}
void insertAtBetween()
{
    int pos;
    printf("enter position:");
    scanf("%d",&pos);

    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data:");
    scanf("%d",&newnode->data);

    struct Node *temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("inserted %d at %d position succesfully!\n",newnode->data,pos);
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1.add last in Linked List\n");
        printf("2.print Linked List\n");
        printf("3.add at begining in Linked List\n");
        printf("4.add at between in Linked List\n");
        printf("0.exit\n");
        printf("enter ur choice:");
        scanf("%d",&choice);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            addNode();
            break;
        case 2:
            printLL();
            break;
        case 3:
            addAtBeginning();
            break;
        case 4:
            insertAtBetween();
            break;
        case 0:
            printf("Thankyou visit again!");
            exit(0);
            break;
        default:printf("invalid choice!\n");
            break;
        }
        printf("press any key to continue...");
        getch();
    } while (choice!=0);
    
    // take 2 input from user let start=50,end=100  then store all prime numbers in a list

    return 0;
}