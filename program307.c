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
void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("%D\t" , head-> data);
        head = head->next;
    }
}
int Count(PNODE head)
{
    while(head != NULL)
    {
        iCount++;
        head = head->next;

        return iCount;
    }
}
int main()
{
    PNODE first = NULL;
    int iRet=0;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);

    Display(first);

    iRet = Count(first);
    printf("Number of elements are: %d\n" , iRet);

    return 0;

}