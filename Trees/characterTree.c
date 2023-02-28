#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary(char[]);
void printTree(struct node *);

struct node
{
    char data;
    struct node *left;
    struct node *right;
};
 int totalnodes=0;
int main()
{
    char arr[]={'A','B','D','\0','H','\0','\0','E','\0','\0','C','F','\0','\0','G','I','\0','\0','\0'};
    struct node *root;
    root = buildBinary(arr);

    printTree(root);

    return 0;
}
struct node *buildBinary(char arr[])
{
    char data;
    data=arr[totalnodes++];
    if (data=='\0')
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
        printf(" %c ", root->data);
        printTree(root->left);
        printTree(root->right);
    }
}