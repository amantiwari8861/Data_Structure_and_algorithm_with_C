#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
	struct node *start,*newnode;

	void create();
	void binsert();
	
void main()
{
	int ch;
	//start=NULL;
	//temp=temp1=NULL;
	printf("\n 1- insert at begining");
	printf("\n 2- Insert at end");
	printf("\n 3- insert at position i");
	printf("\n 4- Delete at i");
	printf("\n 5- Display from beginning");
	printf("\n 6- Display from end");
	printf("\n 7- Search from elements");
	printf("\n 8- Sort the list");
	printf("\n 9- Update an element");
	printf("\n 10- Exit");

	while(1)
	{
		printf("\n Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			create();
			break;
			case 2:
			binsert();
			break;
			case 10:
			exit(0);
			default:
			printf("\n Invalid");
		}
	}
}

void create()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->prev=NULL;
	newnode->next=NULL;
	printf("\n Enter value to node : ");
	scanf("%d",&newnode->data);
	//count++;
}

	void binsert()
	{
		printf("hii");
	}		