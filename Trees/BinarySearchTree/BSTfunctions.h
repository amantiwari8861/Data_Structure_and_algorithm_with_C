#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}*root=NULL;
struct Node* getNode()
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&newNode->data);
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* addNode(struct Node* cn)
{
    if (cn==NULL)
    {
        cn=getNode();
        printf("node created!");
        return cn;
    }
}
void preOrder(struct Node *cn){
    if (cn==NULL)
    {
        return;
    }
    printf("%d",cn->data);
    preOrder(cn->left);
    preOrder(cn->right);
}
void inOrder(struct Node *cn){
     if (cn==NULL)
    {
        return;
    }
    inOrder(cn->left);
    printf("%d",cn->data);
    inOrder(cn->right);
}
void postOrder(struct Node *cn)
{
    if (cn==NULL)
    {
        return;
    }
    postOrder(cn->left);
    postOrder(cn->right);
    printf("%d",cn->data);
}
void searchNode(struct Node *cn){}
void deleteNode(struct Node *cn){}