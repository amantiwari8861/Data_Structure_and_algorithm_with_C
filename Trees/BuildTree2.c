#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}*root;

struct Node* getNewNode()
{
    int data;
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&data);
    if(data==-1)
    {
        return NULL;
    }
    else
    {
        newNode->data=data;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
}
struct Node* addNode(struct Node *cn)
{
    if (root==NULL)
    {
        printf("enter root's data:");
        root=getNewNode();
        return root;
    }
    if(cn==NULL)
    {
        return NULL;
    }
    printf("enter data :");
    struct Node *newNode=getNewNode();
    printf("going to %d's left :\n",cn->data);
    cn->left=addNode(cn->left);
    printf("going to %d's right :\n",cn->data);
    cn->right=addNode(cn->right);
    return newNode;
}
void printTree(struct Node* cn)
{
    if (cn==NULL)
    {
        return;
    }    
    printf(" %d ",cn->data);
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
            // printf("%d ",root->data);
            break;
        case 2:
            printf("%d ",root->data);
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
