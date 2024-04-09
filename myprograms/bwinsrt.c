#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *start,*cn;

void delete();
void create();
void binsert();
void bwinsrt();
void display();
void bwdelete();

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
		case 4:
		delete();
		break;
		case 5:
		bwinsrt();
		break;
		case 6:
		bwdelete();
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
void display()
{
	cn=start;
	printf("list is : ");
	while(cn!=NULL)
	{
		printf("%d\t",cn->data);
		cn=cn->next;
	}

}
void delete()
{
	struct node *cn;
	cn=start;
	start=start->next;
	printf("Delete node=%d\n",cn->data);
	free(cn);;
}
void bwinsrt()
{
	struct node *newnode,*previous,*cn;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data : \n");
	scanf("%d",&newnode->data);
	printf("data is inserted");
	if(start==NULL)
	{
		newnode=NULL;
		start=newnode;
	}
	else{
		previous=NULL;
		cn=start;
	
	
	while(cn->data <= newnode->data && cn!=NULL)
	{
		previous=cn;
		cn=cn->next;
	}
	newnode->next=cn;
	if(previous!=NULL)
	{
		previous->next=newnode;
	}
	else{
	start=newnode;
	}
	}
}
void bwdelete()
{
	struct node *newnode,*previous;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data : \n");
	scanf("%d",&newnode->data);
	previous=NULL;
	cn=start;
	while(cn->data!=newnode->data && cn!=NULL)
	{
		previous=cn;
		cn=cn->next;
	}
	if(cn==NULL)
	{
		printf("value not found in the list");
	}
	else if(cn==start)
	{
		start=newnode;
		free(cn);
	}
	else
	{
		previous->next=cn->next;
	}
	free(cn);	
}