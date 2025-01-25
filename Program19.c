/*
PROBLEM BASED ON SWITCH CASE
technically it's called if-else-if ladder

there's one school of 8,9,10 standards. 8th std exams is at 9:30 , 9th at 10.30 and 10th at 11:30
take input standard from user and then the program should be able to display their exam time


Without (conditions)

*/

#include<stdio.h>

void DisplayTimeTable(int iStd)
{
    if(iStd == 8)
    {
        printf("Your exam is at 9:30\n");
    }
    else if(iStd == 9)
    {
         printf("Your exam is at 10:30\n");
    }
    else if(iStd == 10)
    {
         printf("Your exam is at 11:30\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Please enter your std:\n");
    scanf("%d", &iValue);

    DisplayTimeTable(iValue);

    return 0;
}