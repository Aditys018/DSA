/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>


int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }
    return iCount;
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