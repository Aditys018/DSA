#include<stdio.h>

void DisplayR(int iNo)
{
    int iCnt = 1;

    if (iCnt <= iNo )
    {
        printf("*/n");
        iNo++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    

    printf("enter the frequency: \n");
    scanf("%d, &iVlue");

    DisplayR(iValue);


    return 0;
}