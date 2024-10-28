/*
accept number from user and display all it's factors

*/


#include<stdio.h>


void SumFactors(int iNo)
{
 int iCnt = 0;
 int iSum = 0;

 printf("Factors of %d are: \n" , iNo);

 for (iCnt = 1; iCnt <= iNo/2; iCnt++)
 {
    if(iNo % iCnt == 0)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
 }
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

  

    return 0;

}