// make a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; 
}*start,*cn;
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
}
void printList()
{
    cn=start;
    while (cn != NULL)
    {
        printf("the data in node is %d \n",start->data);
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
        printf("enter ur choice :");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
            case 1:createNode();
                    break;
            case 2: printList();
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