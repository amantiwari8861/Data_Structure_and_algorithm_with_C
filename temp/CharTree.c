#include <stdio.h>
#include <stdlib.h>
struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
}*root;
struct Node *getNewNode()
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    scanf(" %c", &newNode->data);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct Node *addNode(struct Node *cn)
{
    if (root == NULL)
    {
        printf("Enter root's data: ");
        root = getNewNode();
        return root;
    }
    if (cn == NULL || cn->data == 'x')
    {
        return NULL;
    }
    printf("Enter data at %c left: ", cn->data);
    cn->left = getNewNode();
    cn->left = addNode(cn->left);
    printf("Enter data at %c right: ", cn->data);
    cn->right = getNewNode();
    cn->right = addNode(cn->right);
    return cn;
}
void preOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    printf("%c ", cn->data);//Node
    preOrder(cn->left);//Left
    preOrder(cn->right);//Right
}
void inOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    inOrder(cn->left);//Left
    printf("%c ", cn->data);//Node
    inOrder(cn->right);//Right
}
void postOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    postOrder(cn->left);//Left
    postOrder(cn->right);//Right
    printf("%c ", cn->data);//Node
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. Add node in tree\n");
        printf("2. Pre-Order\n");
        printf("3. In-Order\n");
        printf("4. Post-Order\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            root = addNode(root);
            break;
        case 2:
            preOrder(root);
            break;
        case 3:
            inOrder(root);
            break;
        case 4:
            postOrder(root);
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Press any key to continue...");
        getchar();
    } while (choice != 0);
    return 0;
}