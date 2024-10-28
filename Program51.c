/*
PROBLEMS ON DIGITS
EX:
8976427

while loop will traverse like this in code
iNo = 8976427           iDigit = 0
iNo = 897642            iDigit = 7
iNo = 89764             iDigit = 2
iNo = 8976              iDigit = 4
iNo = 897               iDigit = 6
iNo = 89                iDigit = 7
iNo = 8                 iDigit = 9
iNo = 0                 iDigit = 8

int iNo  = 8976427;
int iDigit = 0;

iDigit = iNo % 10;
iNo = iNo / 10;

*/



#include<stdio.h>

int main()
{
    int iNo = 74926;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n" , iDigit);
        iNo = iNo /10;
    }
    return 0;
}


