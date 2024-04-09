#include <stdio.h>
void reverseSentence();//declareing 
int main()
{
    printf("Enter a sentence: ");
    reverseSentence();//calling
    return 0;
}
void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}