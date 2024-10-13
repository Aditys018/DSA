/*
PROBLEM BASED ON SWITCH CASE

there's one school of 8,9,10 standards. 8th std exams is at 9:30 , 9th at 10.30 and 10th at 11:30
take input standard from user and then the program should be able to display their exam time


With (conditions)
without break keyword

*/

#include<stdio.h>

void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8:
            printf("your exam is at 9.30\n");
        case 9:
             printf("your exam is at 10.30\n");
        case10:
             printf("your exam is at 11.30\n");
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