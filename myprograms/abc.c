#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
	struct node *newnode,*start,*last;
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
	printf("enter the data in beggining : \n");
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
/*void display()
{
	last=start;
	printf("list is : ");
	while(last->next!=NULL)
	{
		printf("%d\t",start->data);
		last=last->next;
	}
}
*/
void main()
{
	create();
	binsert();
	iend();
	//display();
	
}