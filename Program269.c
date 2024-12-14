#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;  // static is MIMP here otherwise it will consider its storage class as auto

    if(iCnt <= 4 )
    {
        printf("*\n");
        iCnt++;
        DisplayR();    //recursive call
    }
}

int main()
{
    printf("inside main\n");
    DisplayR();
    printf("end of  main\n");

    return 0;
}