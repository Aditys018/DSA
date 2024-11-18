/*
PATTERNS PROGRAM

ex:
 input: 4
 output: -1 -2 -3 -4

 this is correct way of declaring the syntax

*/



#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -1 ; iCnt >= -iNo ; iCnt--)
    {
        printf("%d\t" , iCnt);
    }

    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

    Display(iValue);

    return 0;
}