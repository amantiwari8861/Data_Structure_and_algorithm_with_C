#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
}*node1,*cn,*start;
struct Node* createNode()
{
    node1=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data :");
    scanf("%d",&node1->data);
    node1->link=NULL;
    return node1;
}
void printList()
{
    cn=start;
    int count=0;
    while (cn != NULL)
    {
        printf(" the data at %d node is %d \n",++count,cn->data);
        cn=cn->link;
    } 
}
int main()
{
    struct Node  *newNode;
    newNode=createNode();
    start=newNode;
    printList();
    return 0;
}