#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char names[][20])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            if (strcmp(names[j],names[j+1])>0) //ascending
            // if (strcmp(names[j],names[j+1])<0)  //descending
            {
                char *temp=(char*)malloc(20);
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }   
    }
}
int main()
{
    char names[][20]={"Aman Tiwari","naman1","Naman","namaan2","Naman1","1","$","Ram","Shyam","Xyz"};
    // char *names[]={"Aman Tiwari","naman1","Naman","namaan2","Naman1","1","$","Ram","Shyam","Xyz"};
    sort(names);
    printf("Sorted names :\n");
    for (int i = 0; i < 10; i++)
    {
        // printf("%d. %s \n",i+1,names[i]);
        printf("%d. %s \n",i+1,names[i]);
    }
    return 0;
}

/*
char *s = "hello";

then you may not write

s[0] = 'H';

But if you will declare a character array initialized by a string literal like

char s[] = "hello";

then you may write

s[0] = 'H';

*/