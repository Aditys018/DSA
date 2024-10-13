//Program based on Iteration
//static iteration(pratyek veli different value display honar)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt  = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d \n", iCnt);
    }

}
int main()
{
    
    int iFrequency = 0;

    printf("Enter the frequency: \n");
    scanf("%d" , &iFrequency);


    return 0;
}
