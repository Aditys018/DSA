/*
Accept input from user and count even digits from the user input

*/




#include<stdio.h>


void CountEvenDigits(int iNo)
{
     int iDigit = 0, iCount = 0;
    
     if(iNo < 0)   //updator
     {
        iNo = -iNo ;
     }

     while(iNo > 0)
     {
        iDigit = iNo % 10;
        if(iDigit % 2 =! 0)
        {
            iCount++;
        }
        iNo = iNo /10;
     }
     return iCount;
}
int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d" , &iValue);

    CountDigits(iValue);
    return 0;

}