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
            
        }
    
    else
    {
        newn->next = *head;
        *head = newn;
    }

    (*tail) -> next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))  //LL is empty
        {
            *head = newn;
            *tail = newn;
            
        }
    
    else
    {
        (*tail)->next = newn;
        *tail = newn;
    }

    (*tail) -> next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos){}

void DelteFirst(PPNODE head, PPNODE tail){}
void DeleteLast(PPNODE head, PPNODE tail){}
void DeleteAtPos(PPNODE head, PPNODE tail, int ipos){}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL && tail == NULL)
    {
        printf("ll is empty\n");
        return;
    
    }
    printf("elements of ll are: \n");

    do
    {
       printf("|%d | -> , head->data");
    } while(head != tail->next);

    
}
int Count(PNODE head, PNODE tail)
{
    int iCount = 0;
    do
    {
       iCount++;
       head = head -> next;
    } while (head != tail->next);
    
}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    Display(first,last);
    iRet = Count(first,last);

    printf("number of elements are: %D\n" , iRet);

    return 0;
    
}