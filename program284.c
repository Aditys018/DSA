/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount = 0;  // we need to make it static to make icount var. static
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 ==0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter the numbers: \n");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);

    printf("even digits are: %d\n" , iRet);


    return 0;
}