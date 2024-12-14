/*
ip: 5
op: 12345
*/

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 1;

    if (iCnt <= iNo )
    {
        printf("%d/n");
        iNo++;
        DisplayI(iNo);
    }
}

int main()
{
    int iValue = 0;
    

    printf("enter the frequency: \n");
    scanf("%d, &iValue");

    DisplayI(iValue);

    printf("end of main");


    return 0;
}