/* PROBLEM BASED ON NUMBERS
take a number from user and check if it is completely divisible by 3 and 5 both or not 

checkwether asa ala ki function chi value should be boolean

*/



#include<stdio.h>
#include<stdbool.h>    // used for writing boolean values


bool CheckDivisible(int iNo)
{
    if( ((iNo % 3) == 0) && (iNo %5 ) ==0)
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
    { printf("%d is divisible by 3 & 5\n" , iValue); }

    else
    { printf("%d is not divisible by 3 & 5\n" , iValue); }

   return 0;
}