//dynamic implementation of queue
#include <stdio.h>
#include <stdlib.h>

void insert();
void delete ();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("\n 1.INSERT");
        printf("\n 2.DELETE");
        printf("\n 3.DISPLAY");
        printf("\n 4.EXIT");
        printf("\n ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("no such option \n");
            break;
        }
    }
}
void insert()
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    printf("\nENTER THE DATA : ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }
}

void delete ()
{
    struct node *ptr = front;
    if (front == NULL && rear == NULL)
        printf("queue underflow \n");
    else if (front == rear)
        front = rear = NULL;
    else
        front = front->next;
        if (ptr !=NULL)
        {
            printf("deleted element is %d ", ptr->data);
        }
    free(ptr);
}

void display()
{
    struct node *ptr = front;
    if (front == NULL && rear == NULL)
        printf("QUEUE is empty\n");
    else
    {
        printf("\n---------------------------------\n");
        printf("\tprinting stack elements : \n");
        while (ptr != NULL)
        {
            printf(" %d \n", ptr->data);
            ptr = ptr->next;
        }
        printf("\n---------------------------------\n");
    }
}