#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; 
}*start,*cn,*last,*head;
void createNode()
{
    struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
    if (newNode==NULL)
    {
        printf("unable to allocate the memory to newNode!");
        exit(1);
    }
    printf("enter the data : ");
    scanf("%d",&newNode->data);
    fflush(stdin);
    newNode->next=NULL;
    start=newNode;
    head=newNode;
}
void appendNode()
{
    struct node *append;
    append=(struct node*)malloc(sizeof(struct node));
    if (append==NULL)
    {
        printf("unable to allocate the memory to newNode!");
        exit(1);
    }
    printf("enter the value : ");
    scanf("%d",&append->data);
    fflush(stdin);
    append->next=NULL;
    last=append;
    last->next=append;
}
void printList()
{
    cn=start;
    int count=0;
    while (cn != NULL)
    {
        printf("the data in node %d is %d \n",++count,cn->data);
        cn=cn->next;
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
        printf("enter ur choice :");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
            case 1:createNode();
                    break;
            case 2: printList();
                    break;
            case 3: appendNode();
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