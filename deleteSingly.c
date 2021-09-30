#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
}*cn,*last,*head,*previous,*current;

struct Node *start=NULL;
struct Node* createNode()
{
    printf("Creating a Node \n");
    struct Node *node1;
    node1=(struct Node*)malloc(sizeof(struct Node*));
    if (node1==NULL)
    {
        printf("unable to allocate the memory to newNode!");
        exit(1);
    }
    printf("enter the data :");
    scanf("%d",&node1->data);
    fflush(stdin);
    return node1;
}
int find()
{
    int num,pos=0,count=0;
    printf("enter the data you want to search \n");
    scanf("%d",&num);
    fflush(stdin);
    cn=start;
    while (cn !=NULL)
    {
        ++count;
        if (cn->data == num)
        {
            pos=count;
            previous=cn;
        }
        cn=cn->link;
    }
    printf("found at position %d \n",pos);
    return pos; 
}

void binsert()
{
	struct Node *newnode;
	int data;
    int pos=find();
	newnode=createNode();

    current=previous->link;
    printf("the previous is %d and current is %d \n ",previous->data,current->data);
	if(start==NULL)
	{
        printf("there is no list available \n");
        //start=newnode;
	}
	else
    {
        newnode->link=current;
        previous->link=newnode;
    }
}

void appendNode()
{
    struct Node *newNode;
    newNode=createNode();
    if(start==NULL)
    {
        printf("creating new List \n");
        start=newNode;
        last=newNode;
        newNode->link=NULL;
    }
    else
    {
        printf("adding in old list\n");
        last=start;
		while(last->link!=NULL)
		{
			last=last->link;
		}
		last->link=newNode;
		last=newNode;
		newNode->link=NULL;
    }
}

void close()
{
    printf("Thank you! for choosing us \n");
    exit(0);
}
void printList()
{
    cn=start;
    int count=0;
    while (cn != NULL)
    {
        printf(" the data at %d node is %d \n",++count,cn->data);
        cn=cn->link;
    } 
}

void deleteBeginningNode()
{
    // if(head==NULL)
    // {
    //     printf("there is no node in List \n");
    // }
}
void deleteFromBetween()
{
    struct Node *del;
    int pos=find();
    
    if(pos==0)
    {
        printf("there is no node in List like this \n");
    }
    else if (pos==1)
    {
        deleteBeginningNode();
    }
    else
    {
        cn=start;
        int count=0;
        while (cn != NULL)
        {
            if (pos==++count)
            {
                del=cn;
                break;
            }
            previous=cn;
            cn=cn->link;
        } 
        previous->link=del->link;
        free(del);
    }
}

void deleteFromEnd()
{
    struct Node *del;
    cn=start;
    if (cn->link==NULL)
    {
        deleteBeginningNode();
    }
    else
    {
        while (cn !=NULL)
        {
            del=cn;
            // printf(" del %d \n",del->data);
            if (cn->link==NULL)
            {
                break;
            }
            previous=cn;
            // printf(" previous %d \n",previous->data);
            cn=cn->link;
        }
        previous->link=NULL;
        free(del);
    }
}
int main()
{
    char ch;
    int choice;
    do
    {
        printf("1. create first node.\n");
        printf("2. print list.\n");
        printf("3. append node \n");
        printf("4. insert in between \n");
        printf("5. Delete from beginning \n");
        printf("6. Delete from between \n");
        printf("7. Delete from end \n");
        printf("8. find \n");
        printf("9. close \n");

        printf("enter ur choice :");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
            case 1: appendNode();
                    break;
            case 2: printList();
                    break;
            case 3: appendNode();
                    break;
            case 4: binsert();
                    break;
            case 5: deleteBeginningNode();
                    break;
            case 6: deleteFromBetween();
                    break;    
            case 7: deleteFromEnd();
                    break;
            case 8: find();
                    break;
            case 9: close();
                    break;
            default:printf("there is no choice like this !");
                    break;
        }
        printf("do u want to continue[y/Y] ? : ");
        scanf("%c",&ch);
        fflush(stdin);
    } while (ch=='y' || ch=='Y');
    return 0;
}