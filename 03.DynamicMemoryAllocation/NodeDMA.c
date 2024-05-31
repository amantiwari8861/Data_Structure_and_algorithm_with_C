#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    struct Employee
    {
        int id;
        char name[20];
        struct Employee *link;
    };
    
    // printf("size:%d",sizeof(struct Employee));

    // struct Employee emp1,emp2;
    // printf("size:%d\n",sizeof(struct Employee));
    // printf("size:%d\n",sizeof(struct Employee));

    struct Employee *empPtr;
    empPtr=(struct Employee*)malloc(sizeof(struct Employee));
    empPtr->id=100;
    // empPtr->name="Aman";//error
    strcpy(empPtr->name,"Aman Tiwari");

    // printf("id:%d \n",empPtr->id);
    // printf("name:%s \n",empPtr->name);

    struct Employee *empPtr2;
    empPtr2=(struct Employee*)malloc(sizeof(struct Employee));
    empPtr2->id=101;
    strcpy(empPtr2->name,"Sparsh");
    empPtr2->link=NULL;

    // printf("id:%d \n",empPtr2->id);
    // printf("name:%s \n",empPtr2->name);

    empPtr->link=empPtr2;//linking aman's data with sparsh


    printf("************* Employee Data ************\n");
    struct Employee *currentNode;
    currentNode=empPtr;
    while (currentNode!=NULL)
    {
        printf("Employee id:%d \n",currentNode->id);
        printf("Employee Name:%s \n",currentNode->name);
        currentNode=currentNode->link;
        printf("========================================\n");
    }
    return 0;
}
