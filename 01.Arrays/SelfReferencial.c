#include<stdio.h>
#include<string.h>
int main()
{
    struct Friend
    {
        char name[20];
        struct Friend *link;//self referencial pointer
    };

    struct Friend f1,f2,f3,f4,f5,*start;
    strcpy(f1.name,"Satish");
    strcpy(f2.name,"Avinash");
    strcpy(f3.name,"Alka");
    strcpy(f4.name,"Khushi");
    strcpy(f5.name,"harsh");

    start=&f1;
    f1.link=&f2;
    f2.link=&f3;
    f3.link=&f4;
    f4.link=&f5;
    f5.link=NULL;

    printf("All friends Name:\n");
    while (start!=NULL)
    {
        printf("%s\n",start->name);
        start=start->link;
    }
    



    return 0;
}
