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
    // Base case
    if (cn == NULL)
        return cn;

    // If the key to be deleted is smaller than the cn's key, then it lies in the left subtree
    if (key < cn->data) {
        cn->left = deleteNode(cn->left, key);
        return cn;
    }
    // If the key to be deleted is greater than the cn's key, then it lies in the right subtree
    else if (key > cn->data) {
        cn->right = deleteNode(cn->right, key);
        return cn;
    }

    // If key is same as cn's key, then this is the node to be deleted
    // Node with only one child or no child
    if (cn->left == NULL) {
        struct Node* temp = cn->right;
        free(cn);
        return temp;
    }
    else if (cn->right == NULL) {
        struct Node* temp = cn->left;
        free(cn);
        return temp;
    }

    // Node with two children: Get the inorder successor (smallest in the right subtree)
    struct Node* succParent = cn;
    struct Node* succ = cn->right;
    while (succ->left != NULL) {
        succParent = succ;
        succ = succ->left;
    }

    // Copy the inorder successor's content to this node
    cn->data = succ->data;

    // Delete the inorder successor
    if (succParent->left == succ)
        succParent->left = succ->right;
    else
        succParent->right = succ->right;

    free(succ);
    return cn;
}