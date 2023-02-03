#include <stdio.h>
#include <malloc.h>
#include <conio.h>
struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};
struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

void create(struct Node *node)
{
    char ch;
    do
    {
        printf("\n enter coeff:");
        scanf("%d", &node->coeff);
        printf("\n enter power:");
        scanf("%d", &node->pow);
        node->next = (struct Node *)malloc(sizeof(struct Node));
        node = node->next;
        node->next = NULL;
        printf("\n continue(y/n):");
        ch = getch();
    } while (ch == 'y' || ch == 'Y');
}
void show(struct Node *node)
{
    while (node->next != NULL)
    {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node->next != NULL)
            printf("+");
    }
}
void polyadd(struct Node *poly1, struct Node *poly2, struct Node *poly)
{
    while (poly1->next && poly2->next)
    {
        if (poly1->pow > poly2->pow)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next)
    {
        if (poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}
int main()
{
    char ch;
    do
    {
        poly1 = (struct Node *)malloc(sizeof(struct Node));
        poly2 = (struct Node *)malloc(sizeof(struct Node));
        poly = (struct Node *)malloc(sizeof(struct Node));
        printf("\nenter 1st Polynomial Expression:");
        create(poly1);
        printf("\nenter 2nd Polynomial Expression:");
        create(poly2);
        printf("\n1st Polynomial Expression:");
        show(poly1);
        printf("\n2nd Polynomial Expression:");
        show(poly2);
        polyadd(poly1, poly2, poly);
        printf("\nAdded polynomial Expression:");
        show(poly);
        printf("\n add another two  polynomials (y/n):");
        ch = getch();
    } while (ch == 'y' || ch == 'Y');
    return 0;
}