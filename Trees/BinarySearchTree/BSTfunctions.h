#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}*root=NULL;
struct Node* getNode(int key)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=key;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* addNode(struct Node* cn,int key)
{
    if (cn==NULL)
    {
        struct Node* newNode=getNode(key);
        return newNode;
    }
    if(key < cn->data)
    {
        printf("going left of %d \n",cn->data);
        cn->left=addNode(cn->left,key);
    }
    else if (key > cn->data)
    {
        printf("going right of %d \n",cn->data);
        cn->right=addNode(cn->right,key);
    }
    return cn; 
}
void preOrder(struct Node *cn){
    if (cn==NULL)
    {
        return;
    }
    printf("%d ",cn->data);
    preOrder(cn->left);
    preOrder(cn->right);
}
void inOrder(struct Node *cn){
     if (cn==NULL)
    {
        return;
    }
    inOrder(cn->left);
    printf("%d ",cn->data);
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
    printf("%d ",cn->data);
}
void searchNode(struct Node *cn){
    
}
void deleteNode(struct Node *cn){}