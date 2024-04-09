#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *start,*cn,*last;

void create();
void binsert();
void iend();
void main()
{
	int choice;
	int n;
	
	do
	{
	printf("enter choice\n");
	scanf("%d",&choice);
	fflush(stdin);
	
	switch(choice)
	{
		case 1:
		create();
		break;
		case 2:
		binsert();
		break;
		case 3:
		display();
		break;
		default:
		printf("invalid");
	}
	printf("do you want to insert data");
	scanf("%d",&n);
	fflush(stdin);
	}while(n==1);
	

		
}
void create()
{
struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data : \n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	start=newnode;
}
void binsert()
{
struct node *newnode;
if(start==NULL)
{
	create();
}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data : \n");
	scanf("%d",&newnode->data);
	newnode->next=start;
	start=newnode;
}
void iend()
{
	struct node *newnode;
	if(start==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data at end : \n");
	scanf("%d",&newnode->data);
	start=newnode;
	last=newnode;
	newnode->next=NULL;
	}
	else{
		last=start;
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=newnode;
		last=newnode;
		newnode->next=NULL;
		printf("last data =%d",last->data);
	}
}