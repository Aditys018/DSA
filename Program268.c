/*
O/P
* * * *

*/

#include<stdio.h>


void DisplayR()
{
    int iCnt = 1;

    if(iCnt <= 4 )
    {
        printf("*\n");
        iCnt++;
        DisplayR();    //recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}