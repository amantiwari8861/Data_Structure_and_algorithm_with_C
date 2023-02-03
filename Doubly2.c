#include <stdio.h>
#include <stdlib.h>

void insertNode();
void display();
void reverseList();
void pushIntoStack(int);
void checkDuplicate();
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head = NULL, *StackHead = NULL, *myList;

int main()
{
    int choice = 0;
    while (choice != 5)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.Insert a Node\n2.Show List\n3.Reverse List \n4.Check Duplicates \n5.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insertNode();
            break;
        case 2:
            display();
            break;
        case 3:
            reverseList();
            break;
        case 4:
            checkDuplicate();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}
void insertNode()
{
    struct node *temp;
    int item;
    myList = (struct node *)malloc(sizeof(struct node));
    if (myList == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d", &item);
        myList->data = item;
        if (head == NULL)
        {
            myList->next = NULL;
            myList->prev = NULL;
            head = myList;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = myList;
            myList->prev = temp;
            myList->next = NULL;
        }
    }
    printf("\nnode inserted\n");
}
void display()
{
    if (head==NULL)
    {
        printf("Empty List !\n");
    }
    else{
    struct node *tempMyList;
    printf("\nprinting values...\n");
    tempMyList = head;
    while (tempMyList != NULL)
    {
        printf("%d\n", tempMyList->data);
        tempMyList = tempMyList->next;
    }
    free(tempMyList);
    }
}
void reverseList()
{
    struct node *tempMyList;
    tempMyList = head;
    while (tempMyList != NULL)
    {
        pushIntoStack(tempMyList->data);
        tempMyList = tempMyList->next;
    }
    free(tempMyList);

    struct node *stackList;
    stackList = StackHead;
    myList = head;
    while (stackList != NULL)
    {
        myList->data = stackList->data;
        stackList = stackList->next;
        myList = myList->next;
    }
    free(stackList);
    printf("List Reversed ! \n");
    display();
}
void pushIntoStack(int data)
{
    struct node *TempStack = (struct node *)malloc(sizeof(struct node));
    if (TempStack == NULL)
    {
        printf("not enough memory \n");
    }
    else
    {
        if (StackHead == NULL)
        {
            TempStack->data = data;
            TempStack->next = NULL;
            StackHead = TempStack;
        }
        else
        {
            TempStack->data = data;
            TempStack->next = StackHead;
            StackHead = TempStack;
        }
    }
}
void checkDuplicate()
{
    struct node *tempMyList, *tempMyList2;
    tempMyList = head;
    int temp = 0, count = 0,flag=0;
    while (tempMyList != NULL)
    {
        tempMyList2 = head;
        while (tempMyList2 != NULL)
        {
            if (tempMyList2->data == tempMyList->data)
            {
                count++;
            }
            tempMyList2 = tempMyList2->next;
        }
        free(tempMyList2);
        tempMyList = tempMyList->next;
        if (count > 1)
        {
            flag=1;
        }
        count = 0;
    }
     if (flag == 1)
        {
            printf("YES ! ,there is duplicate value in list !\n");
        }
        else
        {
            printf("NO ! ,there is NO duplicate value in list !\n");
        }
    free(tempMyList);
}