/*
4. Accept two numbers from user and display first number in second number of times
_____________________________________________________________________________________

Input:  12,5
Output: 12,12,12,12,12

Input:  -2,3
Output: -2,-2,-2

Input:  21,-3
Output: 21,21,21

Input:  -2,0
Output:


#include<stdio.h>

_______Display(______iNo, int iFrequency)
{
    int int =0;
    //write updater

    for(____:________:_______)
    {
        printf("_____,__________);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("_______", &_______);

    printf("Enter frequency");
    scanf("________",&_________);

    Display(__________,___________);
    return 0;
}

*/


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
     
    //write updater

    for(int i = 0; i<iFrequency; i++)
    {
        printf("%d" , iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}