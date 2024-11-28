/*
program to count small letters in the string (DON'T USE ASCII)
*/


#include<stdio.h>

int CountSmall(char *str)  //you can use this instead of inbuilt strlen library, this doesn't count space between the letters in a string
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >='a' && *str <= 'z')
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

    iRet = CountSmall(Arr);

    printf("number of small letters are: %d\n" , iRet);

    return 0;

}