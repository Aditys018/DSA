#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *next;

}NODE, *PNODE, **PPNODE;

void enqueue(PPNODE head, int no)
{
     PNODE newn = (PNODE)malloc(sizeof(NODE));
    
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

int deque(PPNODE head)
{
    if(*head == NULL)
    {
        printf("queue is empty\n");
        return -1;
    }
    
    PNODE temp = *head;
    int value = temp->data;
    *head = temp->next;
    free(temp);
    
    return value;
}

int Count(PNODE head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    PNODE first = NULL;
    int ret = 0;
    
    enqueue(&first, 101);
    enqueue(&first, 51);
    enqueue(&first, 21);
    enqueue(&first, 11);
    
    iRet = dequeue(&first);
    printf("removed element is:%d\n" , iRet );
    
    return 0;
}