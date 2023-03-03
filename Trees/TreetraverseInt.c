#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary(int[]);
void preOrder(struct node *);
void inOrder(struct node *);
void postOrder(struct node *);

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int totalnodes = 0;
int main()
{
    int arr[] = {4, 1, 5, -1, -1, 2, -1, -1, 6, -1, -1};
    struct node *root;
    root = buildBinary(arr);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2 

    printf("Pre-Order : ");
    preOrder(root); // 4  1  5  2  6
    printf("\n");
    printf("In-Order : ");
    inOrder(root); // 5  1  2  4  6
    printf("\n");
    printf("Post-Order : ");
    postOrder(root); // 5  2  1  6  4

    return 0;
}
struct node *buildBinary(int arr[])
{
    int data;
    data = arr[totalnodes++];
    if (data == -1)
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
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}