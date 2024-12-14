/*
1932034
no of digits: 7

recursion
*/

#include<stdio.h>

int CountDigitsR(int iNo)
{
    static int iCount = 0;  // we need to make it static to make icount var. static

    if (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        CountDigitsR(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter the frequency: \n");
    scanf("%d", &iValue);

    iRet = CountDigitsR(iValue);

    printf("Number of digits are: %d\n" , iRet);


    return 0;
}