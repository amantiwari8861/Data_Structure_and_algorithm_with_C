#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void addLast();
void printList();
void printHead();

struct Node
{
    int data;
    struct Node *next;
} *head, *tail, *cn;

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
        printf("\t\t\t3.print Head \n");
        printf("\t\t\t4.Exit \n");

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
            printHead();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("invalid choice!!");
            break;
        }
        printf("\nPress Enter to continue....");
        scanf("%c", &ch);
        system("cls");

    } while (ch == '\n');
    getch();
    return 0;
}

void addLast()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data :");
    scanf("%d%*c", &newnode->data);

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
        tail = newnode;
        printf("Added First Element !!\n");
    }
    else
    {
        newnode->next=head;
        tail->next = newnode;
        tail = tail->next;
        printf("Element Added !!\n");
    }
}
void printList()
{
    printf("The List is : [ ");
    cn = head;
    while (cn != tail)
    {
        printf("%d,", cn->data);
        cn = cn->next;
    }
    printf("%d ",cn->data);
    printf("\b]\n");
}
void printHead()
{
    printf("%d",tail->next->data);
}