#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 3
struct Student
{
    int id;
    char name[20];
    float fee;
    struct Student *next;
}*head,*tail;
int noOfStudent=0;
void enque()
{
    if (noOfStudent==N)
    {
        printf("more than %d student not allowed in institute\n",N);
        return;
    }
    
    struct Student *tempStu=(struct Student*)malloc(sizeof(struct Student));
    printf("enter Id:");
    scanf("%d",&tempStu->id);
    fflush(stdin);
    printf("enter Name:");
    scanf("%[^\n]s",&tempStu->name);
    printf("enter Fee:");
    scanf("%f",&tempStu->fee);
    tempStu->next=NULL;
    
    if (head==NULL)
    {
        head=tempStu;
        tail=tempStu;
    }
    else
    {
       tail->next=tempStu; 
       tail=tail->next;
    }
    noOfStudent++;
    printf("Student added in list\n");
}
void showStuList()
{
    struct Student *currSt=head;
    printf("******* All Students List  *********\n");
    while (currSt!=NULL)
    {
        printf("Id :%d Name :%s  Fee :%f \n",currSt->id,currSt->name,currSt->fee);
        currSt=currSt->next;
    }
}
void peek(){
    if (noOfStudent!=0)
    {
       printf("The First Student is :\n");
        printf("Id : %d",head->id);
        printf(" Name : %s",head->name);
        printf(" Fee : %f\n",head->fee);
    }
    else
    {
        printf("no students for admission\n");
    }
}
void deque(){

    if (noOfStudent==0)
    {
        printf("no students to remove\n");
        return ;
    }
    struct Student *temp=head;
    head=head->next;
    free(temp);
    noOfStudent--;
    printf("student removed\n");
}
int main()
{
    int choice;
    do
    {
        system("cls");
        printf("1. enque in queue\n");
        printf("2. print queue\n");
        printf("3. deque from queue\n");
        printf("4. peek in queue\n");
        printf("0. choice\n");

        printf("enter ur choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enque();
            break;
        case 2:
            showStuList();
            break;
        case 3:
            deque();
            break;
        case 4:
            peek();
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
