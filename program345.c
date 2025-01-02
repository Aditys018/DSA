#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))  //LL is empty
        {
            *head = newn;
            *tail = newn;
            (*tail) -> next = *head;
        }
    
    else
    {
        newn->next = *head;
        *head = newn;
        (*tail) -> next = *head;

    }
}
void InsertLast(PPNODE head, PPNODE tail, int no){}
void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos){}

void DelteFirst(PPNODE head, PPNODE tail){}
void DeleteLast(PPNODE head, PPNODE tail){}
void DeleteAtPos(PPNODE head, PPNODE tail, int ipos){}

void Display(PNODE head, PNODE tail){}
void Count(PNODE head, PNODE tail){}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    return 0;
}