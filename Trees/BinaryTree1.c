#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary();
void printTree(struct node *);

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int main()
{
    struct node *root;
    root = buildBinary();
    // 10 3 -1 -1 5 -1 -1
    printTree(root);
    return 0;
}
struct node *buildBinary()
{
    int data;
    scanf("%d", &data);

    if (data == -1)
        return NULL;

    struct node *p = (struct node *)malloc(sizeof(struct node));

    printf("Enter left Node :");
    p->data = data;
    p->left = buildBinary();

    printf("Enter right Node :");
    p->data = data;
    p->right = buildBinary();

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