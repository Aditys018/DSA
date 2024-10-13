/*
Program based on Selection

calculate the percentage and decide if person is pass or failed

ALGORITHM:

START

    Accept the percentage from user
    if percentage are less than 40 then display FAIL
    And if it is greater than or equal to 40 then display PASS
STOP

ADDED return in it from program 16

*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage >100.0f)
    {
        printf("Invalid Percentage. enter in the range of 0 to 100\n");
        return;

    }

    if(fPercentage >= 40.00f)
    {
        printf("You are pass\n");
    }
    else
    {
        printf("You are Fail\n");
    }
}



int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage: \n");
    scanf("%f", &fValue);

    DisplayResult(fValue);

    return 0;
}


