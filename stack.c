#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define MAX 3

void push(int[]);
void print(int[]);
int top=-1;

int main()
{
    int choice;
    int data[MAX];
    do
    {
        system("cls");
        printf("\n\
        1.Push \n\
        2.Print stack \n\
        3.Exit\n\
        ");
        printf("enter ur choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(data);
            break;
        case 2:
            print(data);
            break;
        case 3:
            exit(0);
            break;
        
        default:printf("invalid operation!!!\n");
            break;
        }
        printf("\nenter any key to continue.....");
        getch();
    } while (1);
    return 0;
}
void push(int arr[])
{
    if (top>=MAX-1)
    {
        printf("Overflow !!\n");
    }
    else
    {
        printf("enter the element :");
        scanf("%d",&arr[++top]);       
        printf("item added succesfully!! \n"); 
    }
}
void print(int arr[])
{
    printf(" Total elements =%d \n",top+1);
    for (int i = top; i >= 0; i--)
    {
        printf(" %d ",arr[i]);
    }    
}

