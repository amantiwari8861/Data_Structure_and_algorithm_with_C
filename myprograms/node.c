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
void display();
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
