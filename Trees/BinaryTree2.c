#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary(int[]);
void printTree(struct node *);

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 int totalnodes=0;
int main()
{
    int arr[]={1,2,-1,-1,3,-1,-1};
    struct node *root;
    root = buildBinary(arr);

    printTree(root);

    return 0;
}
struct node *buildBinary(int arr[])
{
    int data;
    data=arr[totalnodes++];
    if (data==-1)
    {
        return NULL;
    }
        
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = data;
    p->left = buildBinary(arr);

    p->data = data;
    p->right = buildBinary(arr);

    return p;
}
void printTree(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        printTree(root->left);
        printTree(root->right);
    }
}