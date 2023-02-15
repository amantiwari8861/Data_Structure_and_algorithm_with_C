#include "LinkedListFxn.c"
int main()
{
    char ch;
    int choice;
    int i = 0;
    do
    {
        printf("\n-----------------Linked List Program------------------------\n");
        printf("\t\t\t1.Add Node \n");
        printf("\t\t\t2.Print List \n");
        printf("\t\t\t3.Add at Position \n");
        printf("\t\t\t4.Delete from First \n");
        printf("\t\t\t5.Delete from Last \n");
        printf("\t\t\t6.Delete from pos \n");
        printf("\t\t\t7.print Reverse list \n");
        printf("\t\t\t8.Reverse list \n");
        printf("\t\t\t9.Exit \n");

        printf("\n\t\t\tEnter choice :");
        scanf("%d%*c", &choice);

        switch (choice)
        {
        case 1:
            addLast();
            break;
        case 2:
            printList();
            break;
        case 3:
            addAtPos();
            break;
        case 4:
            deleteFirst();
            break;
        case 5:
            deleteLast();
            break;
        case 6:
            deleteAtPos();
            break;
        case 7:
            printReverseList(temp);
            break;
        case 8:
            reverseList(head);
            break;
        case 9:
            exit(0);
            break;

        default:
            printf("invalid choice!!");
            break;
        }
        // system("clear"); for linux only
        printf("\nPress Enter to continue....");
        scanf("%c", &ch);
        system("cls");

    } while (ch == '\n');
    getch();
    return 0;
}