#include<stdio.h>
#include<stdlib.h>
void addNode();
void printList();

struct Node
{
    int data;
    struct Node *next;
}*head,*tail,*cn;

int main()
{
    char ch;
    int choice;
    do
    {
        printf("\n-----------------Linked List Program------------------------\n");
        printf("1.Add Node \n");
        printf("2.Print List \n");
        printf("5.Exit \n");

        printf("enter choice :");
        scanf("%d%*c",&choice);

        switch (choice)
        {
        case 1:
            addNode();
            break;
        case 2:
            printList();
            break;
        case 5:
            exit(0);
            break;
        
        default:printf("invalid choice!!");
            break;
        }
        printf("\nPress Enter to continue....");
        scanf("%c",&ch);
        
    } while (ch=='\n');
    
    return 0;
}
void addNode()
{
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data :");
    scanf("%d%*c",&newnode->data);
    newnode->next=NULL;

    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=tail->next;
    }
    
}
void printList()
{
    printf("The List is :\n[");
    cn=head;
    while (cn != NULL )
    {
        printf("%d,",cn->data);
        cn=cn->next;
    }
    printf("\b]\n");
}