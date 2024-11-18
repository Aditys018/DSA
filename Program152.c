/*
PROBLEMS ON STRING
(string traversal)
*/

#include<stdio.h>


void strlenx(char *ptr)
{
    int iCount = 0;
    
     while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
}
int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String: \n");
   scanf("%[^'\n']s" , Arr);

   iRet = strlenx(Arr);

   printf("Length is: %d\n",iRet);

   
   return 0;

}