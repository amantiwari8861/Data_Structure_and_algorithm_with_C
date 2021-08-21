#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next; //self referential object
};
int main()
{
	struct node *newNode;// maked a pointer with a data type of struct node 
	newNode=(struct node*)malloc(sizeof(struct node));
	//above line allocates the 16 bytes and stores the address of this 16 byte in newNode
	printf("the size of a single node is %d and newNode pointer is %d \n",sizeof(struct node),sizeof(*newNode));
    if (newNode==NULL)
    {
        printf("unable to allocate the memory to newNode!");
        exit(1);
    }
    printf("enter the data : ");
    scanf("%d",&newNode->data);

    printf("the data in node is %d ",newNode->data);
    newNode->next=NULL;

    return 0;
}