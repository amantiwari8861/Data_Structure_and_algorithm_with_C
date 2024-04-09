#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *h,temp1,*temp2,*temp3,*temp4;

void insert1();
void insert2();
void insert3();
void traversebeg();
void traverseend();
void sort();
void search();
void update();
void delete();

int count=0;
void main()
{
	int ch;
	h=NULL;
	temp=temp1=NULL;
	
	printf("\n 1 - insert at beginning");
	printf("\n 2 - insert at end");
	printf("\n 3 - insert at position of i");
	printf("\n 4 - delete at i");
	printf("\n 5 - display from beggining");
	printf("\n 6 - display from end");
	printf("\n 7 - search for element");
	printf("\n 8 - sort the list");
	printf("\n 9 - update an element");
	printf("\n 10 - exit");
	
	while(1)
	{
		printf("\n enter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insert1();
			break;
			case 2:
			insert2();
			break;
			case 3:
			insert3();
			break;
			case 4:
			delete();
			break;
			case 5:
			traversebeg();
			break;
			case 6:
			temp2=h;
			if(temp2==NULL)
			{
				printf("\n error : list empty to display");
			}
			else
			{
				printf("\n reverse order of linked list is : ");
				traverseend(temp2->n);
			}
			break;
			case 7:
			search();
			break;
			case 8:
			sort();
			break;
			case 9;
			update();
			break;
			case 10:
			exit(0);
			default:
			printf("wrong choice menu");
		}
	}
}
//to create a empty node
void create()
{
	int data;
	temp=(struct node*)malloc(sizeof(struct node));
	
	
	printf("\n enter value to node : ");
	scanf("%d",&data);
	temp->n=data;
	count++;
}
void insert1()
{
	if(h==NULL)
	{
		
	
}





