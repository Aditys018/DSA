/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    static int iCount = 0;  // we create static if we want to preserve its value
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 ==0)
        {
            iCount++;
        }
        iNo = iNo /10;
        CountEvenDigits(iNo);
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