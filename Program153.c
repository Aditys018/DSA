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
        if(*ptr =='a')
        {
            iCount++;
        }
        printf("%c\n",*ptr);
        ptr++;
    }
    return iCount;
}
int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String: \n");
   scanf("%[^'\n']s" , Arr);

   iRet = strlenx(Arr);

   printf("Count od 'a'  is: %d\n",iRet);

   
   return 0;

}