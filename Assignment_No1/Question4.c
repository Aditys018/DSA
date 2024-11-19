/*
4. ACCEPT ONE NUMBER AND CHECK WHETHER IT IS DIVISIBLE BY 5 OR NOT


#include<stdio.h>


typedef int BOOL;
#define TRUE 1
#define FALSE______

_______Check(_____iNo)
{
    if((_____%5)==0)
    {
        return TRUE;
    }
    else
    {
        return_______;
    }

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number");
    scanf("______",&_________);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;

}

*/


#include<stdio.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("enter number: \n");
    scanf("%d\n",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    
    }
    else
    {
        printf("Not divisible by 5\n");
    }

    return 0;

}