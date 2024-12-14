#include<stdio.h>

void DisplayR(int iNo)
{
    if (iNo >= 1 )
    {
        printf("%d\n", iNo);
        iNo--;
        DisplayR(iNo);
    }
    printf("End of displayR\n");
}

int main()
{
    int iValue = 0;

    printf("enter the frequency: \n");
    scanf("%d, &iValue");

    DisplayR(iValue);

    printf("end of main");


    return 0;
}