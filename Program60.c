/*
accept number from user & return the summation of it's even digits

*/

#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)  //if input is negative
    {
        iNo = - iNo;   //convert it to positive
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 2;
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

    iRet = SumEvenDigits(iValue);

    return 0;
}