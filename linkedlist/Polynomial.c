#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coff;
    int exp;
    struct Node *next;
};
struct Node *create(struct Node *q);
struct Node *insert(struct Node *ptr, struct Node *p);
void display(char const *tag, struct Node *ptr);
void err_exit(char const *tag);

struct Node *create(struct Node *q)
{
    int i, n;
    printf("Enter the number of nodes : ");
    int no=scanf("%d",&n);
    printf("no. = %d \n",no);
    if (scanf("%d",&n) != 1)
        err_exit("Read error(number of nodes)");
    for (i = 0; i < n; i++)
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        if (ptr == 0)
            err_exit("Out of memory(1)");
        printf("enter the coefficient and exponent respectively : ");
        if (scanf("%d %d", &ptr->coff, &ptr->exp) != 2)
            err_exit("Read error(coefficient and exponent)");
        ptr->next = NULL;
        q = insert(ptr, q);
        display("after input", q);
    }
    return q;
}
struct Node *insert(struct Node *ptr, struct Node *p)
{
    struct Node *temp, *b;
    if (p == NULL)
        p = ptr;
    else
    {
        display("insert : p = ", p);
        display("insert : ptr = ", ptr);
        if (p->exp < ptr->exp)
        {
            ptr->next = p;
            p = ptr;
        }
        else
        {
            temp = p;
            while ((temp->next != NULL) && (temp->next->exp < ptr->exp))
                display("insert : tmp = ", temp),
                    temp = temp->next;
            display("insert : post loop", temp);
            b = temp->next;
            temp->next = ptr;
            ptr->next = b;
        }
    }
    return p;
}
void display(char const *tag, struct Node *ptr)
{
    struct Node *temp;
    const char *pad = "";
    temp = ptr;
    printf("%s : ", tag);
    while (temp != NULL)
    {
        printf("%s %d x ^ %d", pad, temp->coff, temp->exp);
        temp = temp->next;
        pad = " + ";
    }
    putchar('\n');
}
int main()
{
    // polynomial ->  3*x^2 + 2*x + 7
    printf("Enter the first polynomial :\n");
    struct Node *p1 = NULL, *p2 = NULL;
    p1 = create(p1);
    printf("Enter the second polynomial :\n");
    p2 = create(p2);
    display("p1", p1);
    display("p2", p2);
    return 0;
}
void err_exit(char const *tag)
{
    fprintf(stderr,"%s\n",tag);
    exit(1);
}
// void printPolynomial()
// {
//     printf("printing the equation:");
//     struct Node *cn = head;
//     while (cn != NULL)
//     {
//         if (cn->coff != 0)
//             printf("%d", cn->coff);
//         if (cn->exp != 0)
//         {
//             printf("x");
//             printf("^%d", cn->exp);
//         }
//         if (cn->next != NULL)
//             printf("+");
//         cn = cn->next;
//     }
// }