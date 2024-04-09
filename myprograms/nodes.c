#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node* head;
void insert(x)
{
	node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(start!=NULL)
		newnode->next=start;
	start=newnode;
}
void main()
{
	int i,n,x;
	start=NULL;
	printf("how many no. : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data : ");
		scanf("%d",&x);
		insert(x);
		print();
	}
}