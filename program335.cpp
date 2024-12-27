#include<iostream>
using namespace std;



typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE newn = NULL;
        PNODE temp = NULL;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            new = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {

            }
        }

        void InsertFirst(int no){}
        void InsertLast(int no){}
        void InsertAtPos(int no, int ipos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}
        void Display(){}
        void Count()
        {
            return iCount;
        }

};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    return 0;
}