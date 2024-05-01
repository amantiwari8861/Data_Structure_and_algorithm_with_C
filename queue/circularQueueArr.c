#include<stdio.h>
#define MAX 5

int line[MAX];
int front,rear;

void print()
{
    // if (front==-1 && rear==-1)
    // {
    //     printf("\nQueue is Empty !!\n");
    //     return;
    // }
    // for (int i = 0; i < MAX; i++)
    // {
    //     if(line[i]==-1 || line[i]==0)
    //         continue;
    //     printf(" at %dth postion :%d \n",i,line[i]);
    // }
    int i;
    for (i = front; i != rear; i = (i + 1) %MAX )
    {
        printf(" %d ",line[i]);
    }
    printf("%d \n",line[i]);
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

        rear=(rear+1)%MAX; //4+1%5 -> 0
        line[rear]=data;
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
        line[front]=-1;
        printf("during deque front ->%d rear -> %d \n",front,rear);
        front=(front+1)%MAX;//0+1%5
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
    // dequeue();

    enqueue(60);
    enqueue(70);
    // enqueue(80);//Must be Full !!


    print();

    return 0;
}