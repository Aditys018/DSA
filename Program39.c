//output in while loop in reverse order

#include<stdio.h>


void Display(int iValue)
{
    int iCnt = 0;

     for(iCnt=9; iCnt>=0;iCnt--);
    {
        printf("%d\n" , iCnt);
    }
}
int main()
{
    int iFreq = 0;
    printf("Enter the number: \n");
    scanf("%d" , &iFreq);

    Display(iFreq);

    return 0;
}