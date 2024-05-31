#include<stdio.h>
int main()
{
    // pointer : 
    // int num=50;
    // printf(" value of num = %d \n",num);
    // printf(" memory address of num = %d \n",&num);
    // & -> address of
    // int *ptr;
    // ptr=&num;
    // printf(" value of ptr = %d \n",ptr);
    // printf(" the value at address ptr = %d \n",*ptr);
    // *ptr=100;
    // printf(" value of num = %d \n",num);

    // char ch='A';
    // char *ptr;
    // ptr=&ch;

    // printf(" %d \n",ch);
    // printf(" %d \n",ptr);
    // printf("value : %c \n",ch);
    // printf("value : %c \n",*ptr);

    // char name[20]={"Aman Tiwari"};
    // printf("%c \n",name[2]);
    // char *charArrPtr;
    // charArrPtr=&name[0];

    // printf("%c\n",*charArrPtr);
    // charArrPtr++;
    // printf("%c\n",*charArrPtr);


    // char name2[20]="Aman Tiwari";
    // char *namePtr="Aman Tiwari";

    // // *namePtr[3]='N'; //error
    // printf(" %c \n",name2[3]);
    // printf(" %c \n",namePtr[3]);


    char friends[3][20]={"Raj","Krish","Robin"};
    char *friendsPtr[3]={"Raj","Krish","Robin"};

    printf(" %s \n",friends[0]);
    printf(" %s \n",friends[1]);
    printf(" %s \n",friends[2]);

    printf("%s \n",friendsPtr[0]);
    printf("%s \n",friendsPtr[1]);
    printf("%s \n",friendsPtr[2]);


    return 0;
}
