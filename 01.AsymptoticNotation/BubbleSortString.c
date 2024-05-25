#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<conio.h>
#define MAX 1000
int inputArray(char *arr[])
{
    int size;
    printf("enter the size of array:");
    scanf("%d%*c",&size);
    // getchar();
    // fflush(stdin);
    // *(arr+0)="Aman\0Tiwari";
    // *(arr+1)="Aman Tiwari 2";
    // *(arr+2)="Aman Tiwari 3";

    for (int i = 0; i < size; i++)
    {
        arr[i]=(char*)malloc(20);
        printf("enter Name %d :",i);
        fgets(arr[i],20,stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    return size;
}
void printArray(char *arr[],int size)
{
    printf("The array is :[");
    for (int i = 0; i < size; i++)
    {
        printf("%s",arr[i]);
        if (i<size-1)
        {
            printf(",");
        }
    }
    printf("]");
}
void bubbleSortString(char *arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (strcmp(arr[j],arr[j+1])==1) // c(99) - a(97) = 3 => 1
            {
                char *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
}
int main()
{

    // char name[]={'A','M','A','N','\0','T','I','W','\0'};
    // char name[]="Aman\0Tiwari";
    // puts(name);
    // char name[4];
    // printf("enter name:");
    // name[0]=getch();
    // name[1]=getch();
    // name[2]=getch();
    // name[3]=getch();
    // printf("the name is :%s \n",name);

    printf("%d",'G');

    char *arr[MAX];
    int size=inputArray(arr);
    bubbleSortString(arr,size);
    printArray(arr,size);
    return 0;
}