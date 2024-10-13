/*
PROGRAM BASED ON SEQUENCE

accept the marks from the user and calculate the percentage take input for marks as well as total marks
expected questions= out of how many?
numbers are in integer form or floating point number?

Algorithm:

START
    Accept the total marks
    Accept the obtained marks
    calculate the percentage as (obtained/total) *100
    display the calculted percentage
STOP

This one is related to typecasting
qu:Typecasting kuthe use kraycha = Jevha mathematical result and output is of different typres then we need to use typecasting
if you're converting from A to B typecast it with the datatype of B
 
 */



#include<stdio.h>
float CalculatePercentage(int iObtained, int iPercentage)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained / (float)iObtained) *100;
    return fPercentage;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter the obtained marks: \n");
    scanf("%d" , &iValue1);

    printf("Enter the total marks: \n");
    scanf("%d" , &iValue2);

    
    fResult = CalculatePercentage(iValue1,iValue2);

    printf("Your percentage is %f\n" , fResult);


    return 0;

}