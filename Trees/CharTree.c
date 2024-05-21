#include <stdio.h>
#include <stdlib.h>
struct node *buildBinary();
void printTreePreOrder(struct node *);

struct node
{
    char data;
    struct node *left;
    struct node *right;
};
int totalnodes=0;
int main()
{
    struct node *root;
    root = buildBinary();
    // 10 3 -1 -1 5 -1 -1
    printTreePreOrder(root);

    printf("\ntotal nodes is :%d",totalnodes);
    return 0;
}
struct node *buildBinary()
{
    int data;
    if (totalnodes==0)
    {
        printf("Enter Root :");
    }
    
    scanf("%c%*c", &data);
    if (data=='x' || data=='X')
        return NULL;
    totalnodes++;
    struct node *p = (struct node *)malloc(sizeof(struct node));

    printf("Enter left Node :");
    p->data = data;
    p->left = buildBinary();

    printf("Enter right Node :");
    p->data = data;
    p->right = buildBinary();

    return p;
}
void printTreePreOrder(struct node *root)
{

    if (root != NULL)
    {
        printf(" %c ", root->data);
        printTreePreOrder(root->left);
        printTreePreOrder(root->right);
    }
}

//pre-order : NLR
//inorder : LNR
//post-order : LRN