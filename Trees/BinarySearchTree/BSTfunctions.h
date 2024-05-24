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
    else if (key >= cn->data)
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
int searchNode(struct Node *cn,int key){
    if (cn==NULL)
    {
        return -1;
    }
    if (key==cn->data)
    {
        printf("found %d in tree \n",cn->data);
        return 1;
    }
    if (key < cn->data)
    {
        printf("searching in left of %d \n",cn->data);
        searchNode(cn->left,key);
    }
    else if (key > cn->data)
    {
        printf("searching in right of %d \n",cn->data);
        searchNode(cn->right,key);
    }
}
struct Node* deleteNode(struct Node *cn,int key)
{
    if (cn==NULL)
    {
        return cn;
    }
    if (key < cn->data)
    {
        printf("searching in left of %d \n",cn->data);
        cn->left=searchNode(cn->left,key);
    }
    else if (key > cn->data)
    {
        printf("searching in right of %d \n",cn->data);
        cn->right=searchNode(cn->right,key);
    }
    if (key==cn->data)
    {
        printf("deleting %d from tree \n",cn->data);
        return NULL;
    }
}