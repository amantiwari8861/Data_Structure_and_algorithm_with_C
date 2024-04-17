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
        printf("List Created!!\n");
    }
    else
    {
        tail->next=newNode;
        tail=tail->next;
        printf("node added at last!!\n");
    }
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
void addFirst()
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL)
    {
        printf("unable to allocate memory!\n");
    }
    newNode->next=NULL;
    printf("enter data in node:");
    scanf("%d",&newNode->data);

    //if list doesn't exist
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        printf("List Created!!\n");
    }
    else
    {
        newNode->next=head;
        head=newNode;
        printf("added at first position succesfully!\n");
    }
}
int countLength()
{
    int count=0;
    struct Node* cn=head;
    while (cn!=NULL)
    {
        count++;
        cn=cn->next;
    }
    return count;
}
void addAtPos()
{
    int pos;
    printf("enter position:");
    scanf("%d",&pos);

    if (pos<=0)
    {
        printf("position caan't be negative or zero\n");
        return;
    }
    else
    {
        int length=countLength();
        if (pos>length+1)
        {
            printf("the list size is %d i.e position is invalid!\n",length);
        }
        else if(pos==length+1)
        {
            addNode();
        }
        else if(pos==1)
        {
            addFirst();
        }
        else
        {
            struct Node *cn=head;
            for (int i = 1; i <= length; i++)
            {
                if (i==pos-1)
                {
                    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
                    printf("enter data:");
                    scanf("%d",&newNode->data);
                    newNode->next=cn->next;
                    cn->next=newNode;
                    break;
                }
                cn=cn->next;
            }
            printf("node added at position %d \n",pos);
        }
    }
    
    
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. Add node in list\n");
        printf("2. print list\n");
        printf("3. Add node at starting\n");
        printf("4. Add node in middle\n");
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
        case 3:
            addFirst();
            break;
        case 4:
            addAtPos();
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
