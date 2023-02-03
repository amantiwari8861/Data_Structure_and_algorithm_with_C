#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head = NULL,*StackHead=NULL;
void insertNode();
void display();
void reverseList();
void search();
void main()
{
    int choice = 0;
    while (choice != 3)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.Insert a Node\n2.Show List\n3.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:insertNode();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        case 4:reverseList();
            break;
        case 5:displayStack();
        break;
        default:
            printf("Please enter valid choice..");
        }
    }
}
void insertNode()
{
    struct node *myList, *temp;
    int item;
    myList = (struct node *)malloc(sizeof(struct node));
    if (myList == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d", &item);
        myList->data = item;
        if (head == NULL)
        {
            myList->next = NULL;
            myList->prev = NULL;
            head = myList;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = myList;
            myList->prev = temp;
            myList->next = NULL;
        }
    }
    printf("\nnode inserted\n");
}
void display()
{
    struct node *myList;
    printf("\n printing values...\n");
    myList = head;
    while (myList != NULL)
    {
        printf("%d\n", myList->data);
        myList = myList->next;
    }
}
void reverseList()
{
    struct node *myList;
    myList = head;
    while (myList != NULL)
    {
        push(myList->data);
        myList = myList->next;
    }
}
void push (int data)  
{  
    struct node *TempStack = (struct node*)malloc(sizeof(struct node));   
    if(TempStack == NULL)  
    {  
        printf("not enough memory \n");   
    }  
    else   
    {  
        if(StackHead==NULL)  
        {         
            TempStack->data = data;  
            TempStack -> next = NULL;  
            StackHead=TempStack;  
        }   
        else   
        {  
            TempStack->data = data;  
            TempStack->next = StackHead;  
            StackHead=TempStack;  
               
        }  
    }
} 
void displayStack()
{
    struct node *myList;
    printf("\n printing values...\n");
    myList = StackHead;
    while (myList != NULL)
    {
        printf("%d\n", myList->data);
        myList = myList->next;
    }
}