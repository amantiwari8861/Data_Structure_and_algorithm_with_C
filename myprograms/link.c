#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void main()
{
	struct node *start,*newNode,*cn;
	newNode=(struct node*)malloc(sizeof(struct node));
	//above line allocates the 6 bytes and stores the address of this 6 byte in newNode
	printf("enter the data : ");
	scanf("%d",&newNode->data);//inserting the data
	newNode->next=NULL;
	start=newNode;//by rule of singly link list
	
	//below traverse the single link list
	cn=start;
	while(cn!=NULL)    
	{
		printf("%d",start->data);
		cn=cn->next;
	}
}