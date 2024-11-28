/*
program to count small m in the string (DON'T USE ASCII)

SOLUTION SCANF
*/


#include<stdio.h>

int Count(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
        iCnt++;
        }
        str++;
    }
     
     return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue = '\0';
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the character to be searched:\n");
    scanf(" %C" , &cValue);  // just specify single space to eliminate the error hya space mule buffer madhe urlela enter hota  to nullify zala and the second char was accepted

    iRet = Count(Arr , cValue);

    printf("number of character: %d\n" , iRet);

    return 0;

}
