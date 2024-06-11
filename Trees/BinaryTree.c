#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}*root = NULL;

struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* addNode(struct Node *cn)
{
    int data;
    printf("Enter data (-1 to stop): ");
    scanf("%d", &data);

    if (data == -1)
    {
        return NULL;
    }

    struct Node *newNode = createNode(data);

    printf("Going left of %d\n", data);
    newNode->left = addNode(newNode->left);

    printf("Going right of %d\n", data);
    newNode->right = addNode(newNode->right);

    return newNode;
}

void preOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    printf("%d ", cn->data);
    preOrder(cn->left);
    preOrder(cn->right);
}
void inOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    inOrder(cn->left);
    printf("%d ", cn->data);
    inOrder(cn->right);
}
void postOrder(struct Node *cn)
{
    if (cn == NULL)
    {
        return;
    }
    postOrder(cn->left);
    postOrder(cn->right);
    printf("%d ", cn->data);
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

        switch (choice)
        {
        case 1:
            root = addNode(root);
            break;
        case 2:
            printf("Pre Order :");
            preOrder(root);
            printf("\n");
            break;
        case 3:
            printf("In Order :");
            inOrder(root);
            printf("\n");
            break;
        case 4:
            printf("Post Order :");
            postOrder(root);
            printf("\n");
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Press any key to continue...");
        getch();
    } while (choice != 0);

    return 0;
}
