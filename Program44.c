/* PROBLEM BASED ON NUMBERS
take a number from user and check if it is completely divisible by 3 or not 

checkwether asa ala ki function chi value should be boolean

*/



#include<stdio.h>
#include<stdbool.h>    // used for writing boolean values


bool CheckDivisible(int iNo)
{
    int iResult = 0;
    iResult = iNo % 3 ;

    if( iResult == 0 )
    {  return true; }
    else
    { return false; }
}
int main()
{
    int iValue = 0;
    bool bFlag = false;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

    bFlag = CheckDivisible(iValue);

    if(bFlag == true)
    { printf("%d is divisible by 3\n" , iValue); }

    else
    { printf("%d is not divisible by 3\n" , iValue); }

   return 0;
}