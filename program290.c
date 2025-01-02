/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>


int CountSmall(char *str)
{
    static int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        CountSmall(str);
    }
    return iCount;
}
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n]s" , Arr);

    iRet = CountSmall(Arr);

    printf("String length is: %d\n" , iRet);


    return 0;
}