#include "MyHeaders.h"
void addLast()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data :");
    scanf("%d%*c", &newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        printf(GREEN "Added First Element !!\n" RESET);
    }
    else
    {
        tail->next = newnode;
        tail = tail->next;
        printf(GREEN "Element Added !!\n" RESET);
    }
}
void printList()
{
    printf("The List is : " YELLOW "[ ");
    cn = head;
    while (cn != NULL)
    {
        printf("%d,", cn->data);
        cn = cn->next;
    }
    printf("\b]\n" RESET);
}
int count()
{
    cn = head;
    int num = 0;
    while (cn != NULL)
    {
        num++;
        cn = cn->next;
    }
    printf(MAGENTA "total element is %d \n" RESET, num);
    return num;
}
void addAtPos()
{
    count();
    int pos;
    printf("enter position to insert :");
    scanf("%d", &pos);

    if (pos == 1)
    {
        /*insert at stating pos*/
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
    }
    else if (pos > 1)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("enter the data:");
        scanf("%d", &newnode->data);
        cn = head;
        for (int i = 2; cn != NULL; i++)
        {
            if (pos == i)
            {
                newnode->next = cn->next;
                cn->next = newnode;
            }
            cn = cn->next;
        }
    }
    else
    {
        printf(RED "pls enter a valid position!!" RESET);
    }
}
void deleteLast()
{
    int size = count();
    if (size < 1)
    {
        printf(RED "the list is empty!!\n" RESET);
    }
    else if (size == 1)
    {
        free(head);
        head = NULL;
        printf(GREEN "Only Element Deleted !!\n" RESET);
    }
    else
    {
        cn = head;
        for (int i = 1; i <= size; i++)
        {
            if (i == size - 1)
            {
                free(cn->next);
                tail = cn;
                tail->next = NULL;
                printf(GREEN "Last Element Deleted !!\n" RESET);
                return;
            }
            cn = cn->next;
        }
    }
}
void deleteFirst()
{
    cn = head;
    free(head);
    head = cn->next;
    free(cn);
    printf(GREEN "First Element Deleted !!\n" RESET);
}
void deleteAtPos()
{
    int pos, current = 0;
    struct Node *prev;
    printf("enter position :");
    scanf("%d", &pos);

    if (pos == count())
    {
        deleteLast();
    }
    else if (pos == 1)
    {
        deleteFirst();
    }
    else
    {
        cn = head->next;
        prev = head;

        while (prev->next != NULL)
        {
            current++;
            if (current == pos - 1)
            {
                prev->next = cn->next;
                free(cn);
                return;
            }
            cn = cn->next;
        }
        printf(GREEN "%d Element Deleted !!\n" RESET, pos);
    }
}