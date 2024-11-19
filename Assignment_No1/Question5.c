
/*
5.ACCEPT ONE NUMBER FROM USER AND PRINT THAT NUMBER OF * ON SCREEN

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (_________;_________;___________)
    {
        printf(*)
    }

}

int main()

{
int iValue = 0;
iValue = 5;

Accept(iValue);
return 0;

}

*/

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt =0;iCnt < iNo; iCnt++)
    {
        printf("* ");
    }

}

int main()

{
int iValue = 0;

printf("Enter a number:\n");
scanf("%d" , &iValue);

Accept(iValue);

return 0;

}