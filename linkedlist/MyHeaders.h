#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define BGCOLOR_RED   "\x1b[41m"
#define BGCOLOR_GREEN   "\x1b[42m"
#include "gotoxy.h"
#include<conio.h>

#include<stdio.h>
#include<stdlib.h>
void addLast();
void addAtPos();
void printList();
int count();
void deleteLast();
void deleteAtPos();
struct Node
{
    int data;
    struct Node *next;
}*head,*tail,*cn,*temp;
void recReverse(struct Node*,struct Node*,struct Node*);