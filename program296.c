#include<stdio.h>
#include<stdlib.h>


struct node
{
   int data;
   struct node *next;
};

int main()
{
   struct node obj;
   struct node *ptr = &obj;

   obj.data = 11;
   ptr->data = 11;

   obj.next = NULL;
   ptr->data = 11;

   printf("value is : %D\n" , obj.data);
   printf("value is: %d\n" , ptr->data);
   
   
   return 0;
}