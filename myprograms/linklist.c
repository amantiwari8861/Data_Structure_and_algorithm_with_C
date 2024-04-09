#include<stdio.h>
#include<stdlib.h>

struct node
{
	char name;
	struct node *next;
}*start,*newnode;

void main()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%c",&newnode->name);
	newnode->next=NULL;
	start=newnode;
	printf("%c",start->name);
}