/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>


int strlenX(char *str)
{
    
}
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n]s" , Arr);

    iRet = strlenX(Arr);

    printf("String length is: %d\n" , iRet);


    return 0;
}