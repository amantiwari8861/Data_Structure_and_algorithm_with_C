#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
int main()
{
    struct Node *node1,*node2,*node3;

    node3=(struct Node*)malloc(sizeof(struct Node));
    node3->data=102;
    node3->link=NULL;

    node2=(struct Node*)malloc(sizeof(struct Node));
    node2->data=101;
    node2->link=node3;

    node1=(struct Node*)malloc(sizeof(struct Node));
    node1->data=100;
    node1->link=node2;

    printf(" Node1 data=%d node address=%d link=%d \n",node1->data,node1,node1->link);
    printf(" Node2 data=%d node address=%d link=%d \n",node2->data,node2,node2->link);
    printf(" Node3 data=%d node address=%d link=%d \n",node3->data,node3,node3->link);

    return 0;
}