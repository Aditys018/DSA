

#include<stdio.h>


void CountDigits(int iNo)
{
     int iDigit = 0;
    
    while(iNo > 0)
    {
        iDigit = iNo++ ;
        printf("The incremented number is : ", & iDigit);
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

    CountDigits(iValue);
    return 0;

}