#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} *head, *tail;

void addNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("unable to allocate memory!\n");
    }

    newNode->next = NULL;
    newNode->prev = NULL;
    printf("enter data in node:");
    scanf("%d", &newNode->data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        printf("List Created!!\n");
    }
    else
    {
        tail->next = newNode;
        newNode->prev=tail;
        tail = tail->next;
        printf("node added at last!!\n");
    }
}
void printList() {
    
    struct Node *cn;
    cn=head;
    printf("The Values in List is :[");
    while (cn!=NULL)
    {
        printf("%d",cn->data);
        if (cn->next!=NULL)
        {
            printf(",");
        }
        cn=cn->next;
    }
    printf("]\n");
}
void printReverse()
{
    struct Node *cn;
    cn=tail;
    printf("The Values in List is :[");
    while (cn!=NULL)
    {
        printf("%d",cn->data);
        if (cn->prev!=NULL)
        {
            printf(",");
        }
        cn=cn->prev;
    }
    printf("]\n");
}

void deleteFromPos()
{
    struct Node *temp=head;
    int pos;
    printf("enter position :");
    scanf("%d",&pos);
    for(int i=1;temp!=NULL;i++)
    {
        if (i==pos)
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            printf("Node deleted from pos %d \n",pos);
            return;
        }
        temp=temp->next;
    }
    printf("unable to find or delete node \n");
}

int main()
{
    struct Node *cn = NULL;
    int choice;
    do
    {
        system("cls");
        printf("1. Add node in Doubly LL\n");
        printf("2. print Doubly LL\n");
        printf("3. Add node at starting\n");
        printf("4. Add node in middle\n");
        printf("5. delete node from starting\n");
        printf("6. delete node from last\n");
        printf("7. delete node from position\n");
        printf("8. search in Doubly LL \n");
        printf("9. print Doubly LL in reverse \n");
        printf("0. choice\n");

        printf("enter ur choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addNode();
            break;
        case 2:
            printList();
            break;
        // case 3:
        //     addFirst();
        //     break;
        // case 4:
        //     addAtPos();
        //     break;
        // case 5:
        //     deleteFirst();
        //     break;
        // case 6:
        //     deleteLast();
        //     break;
        case 7:
            deleteFromPos();
            break;
        // case 8:
        //     search();
        //     break;
        case 9:
            printReverse();
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
