/*
step1 : understand the problem statement

step2 : write the algorithm

step3 : decide the programming language

step4 : write the program

step5: test the program



problem statement:
write a program to perform ADDITION of two numbers

Step1: understand the problem statement
user is going to enter the data in decimal format
if entered data is negative we have to convert it to positive value


step2 : write the algorithm

START:

accept first input
accept second input
if any of the input is negative then convert it into positive
perform the addition of that accepted value
display the addition

stop

step3: decide the programming language
according to the problem statement we select C programming

step4: write the program

*/


#include<stdio.h>


float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;
}
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter first number: \n");
    scanf("%f" , &fNo1);

    printf("Enter second number: \n");
    scanf("%f" , &fNo2);

    fAns = fNo1 + fNo2;

    printf("Addition is: %f\n" , fAns);

    return 0;
}