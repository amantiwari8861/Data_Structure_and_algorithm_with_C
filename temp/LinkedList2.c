#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;//self referencial pointer
};
int main()
{
    struct Node n1,n2,n3,n4;
    n1.data=100;
    n1.next=&n2;
    n2.data=101;
    n2.next=&n3;
    n3.data=102;
    n3.next=&n4;
    n4.data=103;
    n4.next=NULL;

    struct Node *currentNode;
    currentNode=&n1;

    printf("the list is:");
    while (currentNode!=NULL)
    {
        printf("%d ",currentNode->data);
        currentNode=currentNode->next;
    }
    return 0;
}
