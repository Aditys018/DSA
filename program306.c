#include<stdio.h>
#include<stdlib.h>


struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {

    }

}
void InsertLast(PNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;

    }

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);

    Display(first);

    return 0;

}
