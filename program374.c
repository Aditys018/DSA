#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *next;

}NODE, *PNODE, **PPNODE;

void push(PPNODE head, int no)
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

int pop(PPNODE head)
{
    if(*head == NULL)
    {
        printf("Stack is empty\n");
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
    
    push(&first, 101);
    push(&first, 51);
    push(&first, 21);
    push(&first, 11);
    
    printf("Elements in stack are: %d\n", Count(first));
    
    ret = pop(&first);
    printf("Popped element is: %d\n", ret);
    
    printf("Elements remaining in stack: %d\n", Count(first));
    
    return 0;
}