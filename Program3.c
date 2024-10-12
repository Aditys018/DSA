//Variable names should be meaningful ref. from program2.c
//Not a single variable should remain uninitialized (Theory=Garbage val)

#include<stdio.h>

int main()
{
    int iNo1 = 10;
    int iNo2 = 11;
    int iAns =  0;

    iAns = iNo1 + iNo2;

    printf("%d\n" , iAns);
    
    return 0;
    
}


//1:13:51