/*  COMPLETE BELOW CODE SNIPPETS

1. Program to divide two numbers

#include<stdio.h>
________Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(ino2________)
    {
        return -1;
    
    }

    iAns = iNo1 / iNo2;
    return_______;

}
int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = Divide(______,_________);
    printf("Division is %d" , _________);
    return 0;

}
*/

#include<stdio.h>

int divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

     return iNo1/ iNo2;
       
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = divide(iValue1,iValue2);
     
    printf("Division is %d\n" , iRet);

    return 0;
}
