/*
count the number of alphabets in a string

try to write the logic of inbuilt function by yourself
*/


#include<stdio.h>

int strlenx(char *str)  //you can use this instead of inbuilt strlen library, this doesn't count space between the letters in a string
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = strlen(Arr);

    printf("String length is: %d\n" , iRet);

    return 0;
}