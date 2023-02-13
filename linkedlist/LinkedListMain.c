#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_BGCOLOR_RED   "\x1b[41m"
#define ANSI_BGCOLOR_GREEN   "\x1b[42m"

#include<stdio.h>
#include<stdlib.h>
void addLast();
void addAtPos();
void printList();
int count();
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
        printf("3.Add at Position \n");
        printf("5.Exit \n");

        printf("enter choice :");
        scanf("%d%*c",&choice);

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
void addLast()
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
int count()
{
    cn=head;
    int num=0;
    while (cn!=NULL)
    {
        num++;
        cn=cn->next;
    }
    printf("total element is %d \n",num);
    return num;
}
void addAtPos()
{
    count();
    int pos;
    printf("enter position to insert :");
    scanf("%d",&pos);

    if (pos==1)
    {
        /*insert at stating pos*/
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
    else if(pos>1)
    {
        struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        cn=head;
        for(int i=2;cn != NULL;i++)
        {            
            if(pos==i)
            {
                newnode->next=cn->next;
                cn->next=newnode;
            }
            cn=cn->next;
        }
    }
    else
    {
        printf(RED"pls enter a valid position!!"RESET);
    }
}