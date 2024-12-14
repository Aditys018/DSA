/*
1932034
addition of digits: 97

recursion
*/

#include<stdio.h>

int SumDigits(int iNo)
{
    static int iSum = 0;  // we need to make it static to make icount var. static

    if (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigits(iNo);
        
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter the frequency: \n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("Addition of digits are: %d\n" , iRet);


    return 0;
}