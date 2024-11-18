/*
PROBLEMS ON STRING


*/

#include<stdio.h>

int main()
{
   char Arr[30];

   printf("Enter name: \n");
   scanf("%['\n']s" , Arr);       //accepts til first space only

   printf("your name is: %s\n" ,Arr);

    return 0;
}