//Program based on Iteration
//static iteration(pratyek veli different value display honar)

#include<stdio.h>
int main()
{
    int iCnt  = 0;
    int iFrequency = 0;

    printf("Enter the frequency: \n");
    scanf("%d" , &iFrequency);

    for(iCnt=1;iCnt<=iFrequency; iCnt++)
    {
        printf("%d \n", iCnt);
    }

    return 0;
}