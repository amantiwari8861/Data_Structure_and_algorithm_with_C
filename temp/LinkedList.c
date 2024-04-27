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
void deleteFirst()
{
    if (head==NULL)
    {
        printf("list doesn't exist!\n");
        return;
    }
    
    struct Node *temp=head;
    head=head->next;
    free(temp);
    printf("first element deleted!\n");
}
void deleteLast()
{
    if (head==NULL)
    {
        printf("list doesn't exist!\n");
        return;
    }
    struct Node *cn=head;
    while (cn->next->next != NULL)
    {
        cn=cn->next;
    }
    // printf("Data :%d",cn->data);
    free(tail);
    cn->next=NULL;
    tail=cn;
    printf("last element is deleted!\n");
}
void deleteFrompos()
{
    int pos;
    printf("enter position of element to be deleted!:");
    scanf("%d",&pos);

    if (pos<=0)
    {
        printf("position can't be negative or zero\n");
    }
    else if (pos>=countLength()+1)
    {
        printf("list length is smaller than position \n");
    }
    else
    {
        if (pos==1)
        {
            deleteFirst();
        }
        else if (pos==countLength())
        {
            deleteLast();
        }
        else
        {
            struct Node* cn=head,*temp;

            for (int i = 1; i <= countLength(); i++)
            {
                if (i==pos-1)
                {
                    temp=cn->next;
                    cn->next=temp->next;
                    free(temp);
                    printf("deleted from position %d \n",pos);
                    return;
                }
                cn=cn->next;
            }
        }
    }
    printf("deleted from position %d \n",pos);
}
void search()
{
    int key;
    printf("enter element to be searched:");
    scanf("%d",&key);

    struct Node *cn=head;
    for (int  i = 1; cn!=NULL; i++)
    {
        if (cn->data==key)
        {
            printf("found at position :%d\n",i);
            return;
        }
        cn=cn->next;
    }
    printf("element not found in list\n");
}
void printReverse(struct Node *cn)
{
    if (cn==NULL)
    {
        return;
    }
    else
    {
        printReverse(cn->next);
        printf("%d",cn->data);
        if (cn->data!=head->data)
        {
            printf(",");
        }
    }   
}
int main()
{
    struct Node *cn=NULL;
    int choice;
    do
    {
        system("cls");
        printf("1. Add node in list\n");
        printf("2. print list\n");
        printf("3. Add node at starting\n");
        printf("4. Add node in middle\n");
        printf("5. delete node from starting\n");
        printf("6. delete node from last\n");
        printf("7. delete node from position\n");
        printf("8. search in list \n");
        printf("9. print list in reverse \n");
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
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteLast();
            break;
        case 7:
            deleteFrompos();
            break;
        case 8:
            search();
            break;
        case 9:
            cn=head;
            printf("the list is :[");
            printReverse(cn);
            printf("]\n");
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