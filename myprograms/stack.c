#include<stdio.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size],top=-1;
void main()
{
	int value,choice;
	while(1)
	{
		printf("\n********** menu ********");
		printf("\n1. push\n 2.pop\n 3.display\n 4.exit\n");
		printf("enter ur choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the value to be inserted: ");
			scanf("%d",&value);
			push(value);
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("wrong selectio try again ");
		}
	}
}
void push(int value)
{
	if(top==size-1)
	{
		printf("\n stack is full!! insertion is not possibe");
	}
	else
	{
		top++;
		stack[top]=value;
		printf("\n insertion sucess");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty deletion is not possible");
	}
	else
	{
		printf("\ndeleted :%d",stack[top]);
		top--;
	}
}

void display()
{
	if(top==-1)
	{
		printf("this is a empty stack");
	}
	else
	{
		int i;
		printf("stack elements are :");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}