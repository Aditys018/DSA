/*
5. Accept number from user and check whether number is even or odd
_____________________________________________________________________

#include<stdio.h>

#definr TRUE1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    //Logic
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter number");
    scanf("_______", &_______);

    bRet = ChkEven(_________);

    //Display result

    return 0;

}




*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;

}
