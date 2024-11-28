/*
program to count whitespaces in the string
*/


#include<stdio.h>

int CountSpace(char *str)  //you can use this instead of inbuilt strlen library, this doesn't count space between the letters in a string
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        iCnt++;
    }
     str++;
     return iCnt;
}
int main()
{
    char Arr[30];
    int iRet = 0;
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = CountSpace(Arr);

    printf("number of whitespaces are: %d\n" , iRet);

    return 0;

}