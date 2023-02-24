#include<stdio.h>
#define MAX 5

int line[MAX];
int front,rear;

void print()
{
    if (front==-1 && rear==-1)
    {
        printf("\nQueue is Empty !!\n");
        return;
    }
    for (int i = 0; i < MAX; i++)
    {
        if(line[i]==-1 || line[i]==0)
            continue;
        printf(" at %dth postion :%d \n",i,line[i]);
    }
    
    // for (int i = front; i != rear; i = (i + 1) %MAX )
    // {
    //     printf(" %d ",line[i]);
    // }
}
void enqueue(int data)
{
    if ((front==0 && rear==MAX-1)  || front==(rear+1))
    {
        printf("\nQueue is Full !!\n");
    }
    else
    {
        if(front==-1)
            front++;

        line[(++rear)%MAX]=data;
        printf("front ->%d rear -> %d \n",front,rear);
    }    
}
void dequeue()
{
    if (front==-1 && rear==-1)
    {
        printf("\nQueue is Empty !!\n");
    }
    else
    {
        line[(front++)%MAX]=-1;
        printf("during deque front ->%d rear -> %d \n",front,rear);
    }    
}
int main()
{
    front=rear=-1;
    // print();
    // dequeue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    // enqueue(60);//Full

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);
    enqueue(80);


    print();

    return 0;
}