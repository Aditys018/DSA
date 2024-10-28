/*
Take input number from user and check if it is a perfect number or not?


*/


#include<stdio.h>
#include<stdbool.h>



bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt =1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;


    printf("Enter number: \n");
    scanf("%d" , &iValue);

    bRet = CheckPerfect(iValue);

    return 0;

}