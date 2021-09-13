#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
}*cn,*last,*head;

struct Node *start=NULL;
struct Node* createNode()
{
    printf("Creating a Node \n");
    struct Node *node1;
    node1=(struct Node*)malloc(sizeof(struct Node*));
    if (node1==NULL)
    {
        printf("unable to allocate the memory to newNode!");
        exit(1);
    }
    printf("enter the data :");
    scanf("%d",&node1->data);
    fflush(stdin);
    return node1;
}
void appendNode()
{
    struct Node *newNode;
    newNode=createNode();
    if(start==NULL)
    {
        printf("creating new List \n");
        start=newNode;
        last=newNode;
        newNode->link=NULL;
    }
    else
    {
        printf("adding in old list\n");
        last=start;
		while(last->link!=NULL)
		{
			last=last->link;
		}
		last->link=newNode;
		last=newNode;
		newNode->link=NULL;
    }
}

void close()
{
    printf("Thank you! for choosing us \n");
    exit(0);
}
void printList()
{
    cn=start;
    int count=0;
    while (cn != NULL)
    {
        printf(" the data at %d node is %d \n",++count,cn->data);
        cn=cn->link;
    } 
}
int main()
{
    char ch;
    int choice;
    do
    {
        printf("1. create first node.\n");
        printf("2. print list.\n");
        printf("3. append node \n");
        printf("4. close \n");
        printf("enter ur choice :");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
            case 1: appendNode();
                    break;
            case 2: printList();
                    break;
            case 3: appendNode();
                    break;
            case 4: close();
                    break;
            default:printf("there is no choice like this !");
                    break;
        }
        printf("do u want to continue[y/Y] ? : ");
        scanf("%c",&ch);
        fflush(stdin);
    } while (ch=='y' || ch=='Y');
    return 0;
}