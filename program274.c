#include<stdio.h>

void DisplayR(int iNo)
{
    int iCnt = 1;

    if (iCnt <= iNo )
    {
        printf("%d/n", iCnt);
        iCnt++;
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