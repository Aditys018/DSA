/*
2. Accept one number from user and print that number of * on screen
___________________________________________________________________________

void Display(int iNo)
{
    //write updater
    while(iNo>__________)
    {
        printf("*");
        iNo___;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("_______", &_________);


    Display(iValue);

    return 0;



}

*/

#include<stdio.h>

void Display(int iNo)
{
    
    //write updater
    while(iNo > 0)
    {
        printf("* ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);


    Display(iValue);

    return 0;
}