#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue_array[max];
int rear=-1,front=-1;

void insert();
void delete();
void display();
void main()
{
	int choice;
	while(1)
	{
		printf("1.insert the elements to queue\n");
		printf("2.delete the elements to queue\n");
		printf("3.display the elements to queue\n");
		printf("4.quit\n");
		printf("enter your choice :  \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: exit(1);
					break;
			default:
			printf("wrong choice \n");
		}
	}
}
void insert()
{
		int add_item;
		if(rear == max-1)
		{
			printf("queue overflow\n");
		}
		else
		{
			if(front==-1)
			{
				front =0;
			}
			printf("insert the element in queue\n");
			scanf("%d",&add_item);
			rear=rear+1;
			queue_array[rear]=add_item;
		}
}
void delete()
{
	if(front==-1||front>rear)
	{
		printf("queue underflow\n");
		return;
	}
	else
	{
		printf("element deleted from queue is :%d\n",queue_array[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue is : \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue_array[i]);
			printf("\n");
		}
	}
}