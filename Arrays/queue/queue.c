#include<stdio.h>
#define MAX 10

int front,rear;
void enqueue(int line[],int data)
{
    if (front==-1)
    {
        front++;
    }
    if (rear==MAX-1)
    {
        printf("queue is full!\n");
        return;
    }
    line[++rear]=data;
}
void dequeue(int line[])
{
    if (front>rear||front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    line[front++]=0;
}
void printQueue(int line[])
{
    printf("the value in queues are:[");
    for (int i = front; i <= rear; i++)
    {
        printf("%d",line[i]);
        if (i<rear)
        {
            printf(",");
        }
    }
    printf("]\n");    
}
void peek(int line[])
{
    if (front>rear||front==-1)
    {
        printf("can't see 1st element queue is empty\n");
        return;
    }
    printf("At first:%d\n",line[front]);
}
void isEmpty(int line[])
{
    if (front>rear||front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue is not empty\n");   
    }
}
void isFull(int line[])
{
    if (rear==MAX-1)
    {
        printf("queue is full!\n");
    }
    else
    {
        printf("queue is not full!\n");
    }
}

int main()
{
    int line[MAX];
    front=rear=-1;
    
    enqueue(line,10);
    enqueue(line,20);
    enqueue(line,30);
    dequeue(line);
    dequeue(line);
    dequeue(line);
    dequeue(line);
    isEmpty(line);
    isFull(line);
    peek(line);
    printQueue(line);


    return 0;
}
