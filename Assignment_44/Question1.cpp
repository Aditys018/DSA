/*
program to search first occurrence of a particular element from singly linear linked list

function should return position at which element is found

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}

int SearchFirstOcc(PNODE Head, int no)
{
    int position = 1;
    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return position;
        }
        Head = Head->Next;
        position++;
    }
    return -1;
}

int main()
{
    PNODE First = NULL;
    int pos = 0;
    
    
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    InsertLast(&First, 10);
    InsertLast(&First, 20);
    InsertLast(&First, 30);
    InsertLast(&First, 40);
    InsertLast(&First, 50);
    InsertLast(&First, 30);
    InsertLast(&First, 70);

    pos = SearchFirstOcc(First, target);
    if(pos != -1)
    {
        printf("Element %d found at position %d.\n", target, pos);
    }
    else
    {
        printf("Element %d not found in the list.\n", target);
    }

    return 0;
}