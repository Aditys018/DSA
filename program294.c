/*
take input from user and display iteration and recursion of those numbers from user.
using for loop, while loop. recursion
*/



#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[] , int iSize)
{
    static int i = 0;

    
    if(i < iSize )
    {
        printf("%d\n" , Arr[i]);
        i++;
        DisplayR(Arr,iSize);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;

    printf("Enter the number of elements:\n");
    scanf("%d, &iLenght");

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the values:\n");

    int Brr[] = {10,20,30,40,50};

    DisplayR(Brr, 5);

    return 0;
}