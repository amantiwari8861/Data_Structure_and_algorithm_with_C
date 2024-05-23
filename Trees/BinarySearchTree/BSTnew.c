#include "BSTfunctions.h"
int main()
{
    int choice,key;
    do
    {
        system("cls");
        printf("1. Add node in tree\n");
        printf("2. Pre-Order\n");
        printf("3. In-Order\n");
        printf("4. Post-Order\n");
        printf("5. search\n");
        printf("6. delete\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            printf("enter data to be inserted:");
            scanf("%d",&key);
            root = addNode(root,key);
            break;
        case 2:
            printf("Pre-Order :");
            preOrder(root);
            printf("\n");
            break;
        case 3:
            printf("In-Order :");
            inOrder(root);
            printf("\n");
            break;
        case 4:
            printf("Post-Order :");
            postOrder(root);
            printf("\n");
            break;
        case 5:
            searchNode(root);
            break;
        case 6:
            deleteNode(root);
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Press any key to continue...");
        getch();
    } while (choice != 0);
    return 0;
}