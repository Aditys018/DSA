/*
take input from user and display iteration and recursion of those numbers from user.
using for loop, while loop. recursion
*/



#include<stdio.h>

void DisplayR(int Arr[] , int iSize)
{
    static int i = 0;

    
    if(i < iSize )
    {
        printf("%d\n" , Arr[i]);
        i++;
        DisplayR(iSize);
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    DisplayR(Brr, 5);

    return 0;
}