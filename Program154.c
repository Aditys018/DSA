/*
PROBLEMS ON STRING
(string traversal)
*/

#include<stdio.h>


int CountSmall(char *ptr)
{
    int iCount = 0;
    
     while(*ptr != '\0')
    {
        if(*ptr >=97 && *ptr <=122)
        {
            iCount++;
        }
        
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

   printf("Count of 'a'  is: %d\n",iRet);

   
   return 0;

}