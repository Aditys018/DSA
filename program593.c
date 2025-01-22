#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }

    return iCount;
}

void MiddleElement(PNODE head)
{
    int iCount = 0, i = 0;
    PNODE temp = head;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    printf("Middle element is : %d\n",temp->data);
}
void MiddleElementX(PNODE head)
{
    PNODE Teacher = head;
    PNODE Student = head;

    while(Teacher != NULL)
    {
        Teacher = Teacher -> next->next;
        Student = Student ->next;
    }

    printf("Middle element is: %d\n" , Student->data);
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iValue = 0, iPos = 0;
    int iOption = 0;

    InsertFirst(&first,121);
    InsertFirst(&first,111);
    InsertFirst(&first,151);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    temp1 = first;
    temp2 = first;

    temp1 = temp1->next->next;
    temp2 = temp->next->next->next->next;

    

    return 0;
}