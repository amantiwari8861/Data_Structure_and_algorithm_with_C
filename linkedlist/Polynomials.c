#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int coeff;
    int exp;
    struct Node *next;
};
void createNode(struct Node **p1)
{
    struct Node *newNode=malloc(sizeof(struct Node));
    printf("\tenter coeffecient:");
    scanf("%d",&newNode->coeff);
    printf("\tenter power:");
    scanf("%d",&newNode->exp);

    if(p1==NULL)
    {
        *p1=newNode;
        newNode->next=NULL;
    }
    else
    {
        newNode->next=*p1;
        *p1=newNode;
    }
    // printf("node added!\n");
}
void createNodePre(struct Node **poly, int coeff, int exp) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;

    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct Node *temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void printPolyNomial(struct Node *p)
{
    struct Node *cn=p;
    while (cn!=NULL)
    {
        if(cn->coeff!=0)
            printf("%d",cn->coeff);
        if(cn->exp!=0)
            printf("x");
        if(!(cn->exp==0 || cn->exp==1))
            printf("^%d",cn->exp);
        if (cn->next!=NULL)
            printf(" + ");        
        cn=cn->next;
    }
    printf("\n");
}
void addPolynomial(struct Node *p1, struct Node *p2) {
    struct Node *result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            createNodePre(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            createNodePre(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        } else {
            createNodePre(&result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // Add remaining terms of p1
    while (p1 != NULL) {
        createNodePre(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    // Add remaining terms of p2
    while (p2 != NULL) {
        createNodePre(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    // Print the result polynomial
    struct Node *cn = result;
    printf("The addition is: ");
    while (cn != NULL) {
        if(cn->coeff!=0)
            printf("%d",cn->coeff);
        if(cn->exp!=0)
            printf("x");
        if(!(cn->exp==0 || cn->exp==1))
            printf("^%d",cn->exp);
        if (cn->next!=NULL)
            printf(" + ");  
        cn=cn->next;     
    }
    printf("\n");
}
int main()
{
    //poynomials : ax^2 + bx^1 + cx^0 here a,b,c are coeffecient and 2 is exponent
    printf("enter 1st polynomial: \n");
    struct Node *p1=NULL;
    createNode(&p1);
    createNode(&p1);
    createNode(&p1);
    createNode(&p1);

    printf("enter 2nd polynomial: \n");
    struct Node *p2=NULL;
    createNode(&p2);
    createNode(&p2);
    createNode(&p2);

    printf("\nPolynomial 1 : ");
    printPolyNomial(p1);
    printf("Polynomial 2 : ");
    printPolyNomial(p2);

    addPolynomial(p1,p2);

    //5x^3 + 3x^2 + 2x + 7
    //4x^2 + 3x + 9

    return 0;
}
