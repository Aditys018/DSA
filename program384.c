#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;

}NODE, *PNODE, **PPNODE;

void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->rchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)  //tree is empty
    {
        *head = newn;
    }
    else  //tree contains atelast one node
    {
        temp = *head;

        while(1)  //unconditional for loop
        {
            if(no > temp->data) //greater
            {
                if(temp == NULL)
                {
                    temp->rchild = newn;
                }
            }
            else if(no < temp->data)    //smaller
            {
                if(temp == NULL)
                {
                    temp->rchild = newn;
                }
                temp = temp->lchild;
                
            }
            else if(no == temp->data)   //identical
            {
                printf("unable to insert element is duplicate");
                ffree(newn);
                break;
            }
        }
    }
}

int main()
{
    PNODE first = NULL;

    return 0;
}