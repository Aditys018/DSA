/*
Complete below code snippets it contains only service provider function
write entry point function to call below helper functions seperately
______________________________________________________________________________

1. Write a program which accepts one number from user and print that number of even numbers on screen.
__________________________________________________________________________________________________________

Input: 7
Output: 2 4 6 8 10 12 14

void PrintEven(int iNo)
{
     if(iNo <= 0)
     {
        return;
     }
     //Logic

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", & iValue);

    PrintEven(iValue);

    return 0;

}

*/

#include<stdio.h>

void PrintEven(int iNo)
{
     if(iNo <= 0)
     {
        printf("Enter a positive number.");
        return;
     }
     int iCnt = 0;
     int iEven = 2;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
        printf("%d\t" , iEven);
        iEven += 2;
     }
     
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;

}