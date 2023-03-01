#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary(char[]);
void preOrder(struct node *);
void inOrder(struct node *);
void postOrder(struct node *);

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

    printf("Pre-Order : ");
    preOrder(root);
    printf("\n");
    printf("In-Order : ");
    inOrder(root);
    printf("\n");
    printf("Post-Order : ");
    postOrder(root);

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
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %c ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct node *root) //normal traversal
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %c ", root->data);
        inOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %c ", root->data);
    }
}