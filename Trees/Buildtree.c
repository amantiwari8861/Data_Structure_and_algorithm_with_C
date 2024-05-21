#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

struct Node
{
    char data;
    struct Node* left;
    struct Node* right;
}*root;

struct Node* getNewNode()
{
    char data;
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    scanf("%c",&data);
    fflush(stdin);
    if(data=='x' || data=='X')
    {
        return NULL;
    }
    else
    {
        newNode->data=data;
    }
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
struct Node* addNode(struct Node *cn)
{
    if (root==NULL)
    {
        printf("enter root's data:");
        root=getNewNode();
        return root;
    }
    printf("enter data :");
    struct Node *newNode=getNewNode();
    if(cn==NULL)
    {
        return NULL;
    }
    printf("adding to %c's left :\n",cn->data);
    cn->left=addNode(cn->left);
    printf("adding to %c's right :\n",cn->data);
    cn->right=addNode(cn->right);

    return newNode;
}
void printTree(struct Node* cn)
{
    if (cn==NULL || cn->data=='x')
    {
        return;
    }    
    printf(" %c ",cn->data);
    printTree(cn->left);
    printTree(cn->right);
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. add node in tree\n");
        printf("2. print tree\n");
        printf("0. exit\n");

        printf("enter ur choice:");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            root=addNode(root);
            break;
        case 2:
            // printf("%c",root->data);
            printTree(root);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("invalid choice!\n");
            break;
        }
        printf("press any key to continue...");
        getch();
    } while (choice != 0);

    return 0;
}
