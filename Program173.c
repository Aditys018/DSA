/*
program to count small m in the string (DON'T USE ASCII)
*/


#include<stdio.h>

int Count(char *str, char ch)  //you can use this instead of inbuilt strlen library, this doesn't count space between the letters in a string
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
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = Count(Arr , 'm');  //counting only 'm'

    printf("number of m: %d\n" , iRet);

    return 0;

}