/*
PATTERNS PROGRAM

ex:
 input: 4
 output: -1 -2 -3 -4

(though output is correct but it's not correct way to definr the syntax)
*/



#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("-%d\t" , iCnt);
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