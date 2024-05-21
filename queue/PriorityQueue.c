#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define MAX 5
int isEmpty();
int isFull();

struct Node
{
    int data;
    int priority;
    struct Node *next;
} *front, *back;
int count = 0;
void enqueue()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Unable to allocate memory\n");
        return;
    }
    if (isFull())
    {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the data: ");
    scanf("%d", &newNode->data);
    printf("Enter priority: ");
    scanf("%d", &newNode->priority);
    newNode->next = NULL;
    if (front == NULL)
    {
        front = newNode;
        back = newNode;
        printf("Priority Queue created!\n");
    }
    else
    {
        if (front->priority > newNode->priority)
        {
            newNode->next = front;
            front = newNode;
            printf("Added at front = %d\n", newNode->data);
        }
        else
        {
            struct Node *prev = NULL;
            struct Node *cn = front;
            while (cn != NULL && cn->priority <= newNode->priority)
            {
                prev = cn;
                cn = cn->next;
            }
            prev->next = newNode;
            newNode->next = cn;
            if (cn == NULL)
            {
                back = newNode; // Update back if newNode is the last node
            }
            // 4(3),5(2),6(1),7(5),8(4)
        }
        printf("Added in priority queue\n");
    }
    count++;
}
void dequeue()
{
    struct Node *temp = front;
    if (isEmpty())
    {
        printf("can't delete from empty list\n");
        return;
    }
    front = front->next;
    printf("%d removed from queue\n", temp->data);
    free(temp);
    count--;
}
void printQueue()
{
    struct Node *cn = front;
    printf("the stack element is :[");
    while (cn != NULL)
    {
        printf("%d", cn->data);
        if (cn->next != NULL)
        {
            printf(",");
        }
        cn = cn->next;
    }
    printf("]\n");
}
void peek()
{
    if (front != NULL)
        printf("front =%d \n", front->data);
    else
        printf("queue doesn't exist\n");
}
int isEmpty()
{
    if (front == NULL)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (count == MAX)
        return 1;
    else
        return 0;
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. enque node in queue\n");
        printf("2. print queue\n");
        printf("3. dequeue from queue\n");
        printf("4. peek in queue\n");
        printf("5. is queue empty\n");
        printf("6. is queue full\n");
        printf("0. choice\n");

        printf("enter ur choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            printQueue();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            peek();
            break;
        case 5:
           if(isEmpty())
            {
                printf("queue is Empty!\n");
            }
            else
            {
                printf("queue is not empty\n");
            }
            break;
        case 6:
            if(isFull())
            {
                printf("queue is full!\n");
            }
            else
            {
                printf("queue is not full\n");
            }
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("invalid choice!\n");
            break;
        }
        printf("press any key to continue...");
        getch();
    } while (choice != 0);

    return 0;
}
