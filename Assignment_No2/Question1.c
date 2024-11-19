/*
1. Accept one number from user and print that number of * on screen.
________________________________________________________________________

void Display(int iNo)
{

int iCnt = 0;
//write updater
while(iCnt<__________)
{
    printf("*");
    _________;
}


}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("_____", &________);

    Display(iValue);

    return 0;

}

*/
#include<stdio.h>


void Display(int iNo)
{

int iCnt = 0;
//write updater
while(iCnt< iNo)
{
    printf("* ");
    iCnt++;
    
}


}

int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}