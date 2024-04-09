#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start;

struct node *create();
void binsert();
void display();
void linsert();
void delete();
int main()
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
		binsert();
		break;

		  case 2:
		  linsert();
		  break;
		  case 3:
		  display();
		  break;
		  case 4:
		  start=NULL;
		  break;
		  case 5:
		//   delete();
		  break;
		default:
		printf("invalid");
	}
	printf("do you want to insert data");
	scanf("%d",&n);
	fflush(stdin);
	}while(n==1);
return 0;
}

struct node *create(int data)
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node *));

       newnode->data=data;
       newnode->next=NULL;

	return newnode;
}
void binsert()
{
struct node *newnode;

	int data;

	printf("enter the data : \n");
	scanf("%d",&data);
	newnode=create(data);
	if(start==NULL)
	{
    start=newnode;
    printf("start=%d\n",start->data);
	}

	else
   {

	newnode->next=start;
	start=newnode;

	printf("%d\n",start->data);


	}
}

void linsert()
{
	struct node *newnode,*last;
	int data;
	printf("enter the data : \n");
	scanf("%d",&data);
	newnode=create(data);
	if(start==NULL)
	{
		start=newnode;
		last=newnode;
		newnode->next=NULL;
		printf("ldata=%d",start->data);
	}
	else
	{
		last=start;
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=newnode;
		last=newnode;
		newnode->next=NULL;
		printf("last data=%d",last->data);
	}
}
void display()
{
     struct node *cn;
     cn=start;
     if(cn==NULL)
     {
     printf("empty");
     }
     else
     {
	printf("list is : ");
	while(cn!=NULL)
	{
		printf("%d\n",cn->data);
		cn=cn->next;
	}
     }
}
void delete(struct node *newnode)
{
	struct node *newnode;
	newnode=start;
	start=start->next;
	free(newnode);
}