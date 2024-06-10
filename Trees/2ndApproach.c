#include<stdio.h>
#include<malloc.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node *n; // creating a Node pointer
    n = (struct Node *) malloc(sizeof(struct Node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created Node
}

void preOrder(struct  Node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct  Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void postOrder(struct  Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}


int main(){
     
    // Constructing the root Node - Using Function (Recommended)
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  
    // Linking the root Node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("Pre-Order :");
    preOrder(p);
    printf("\nIn-Order :");
    inOrder(p);
    printf("\nPost-Order :");
    postOrder(p);

    // int n=3;
    // printNum(n);
    return 0;
}


// pre-order : NLR
// in-order : LNR
// post-order : LRN


// void printNum(int curr)
// {
//     if (curr>0)
//     {
//         printf("%d ",curr);
//         printNum(curr-1);
//         printNum(curr-1);
//     }
// }

