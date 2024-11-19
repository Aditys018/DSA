/*
3.PROGRAM TO PRINT 5 TO 1 NUMBERS ON SCREEN

#include<stdio.h>
_______Display()
{
    int i=0;
    ____i=5;
    while(_________)
    {
        printf("%d" , i);
        i++;
    }
}

int main()
{
    Display();

    return 0;

}

*/


#include<stdio.h>

void Display()
{
    int i = 5;
    

    while(i > 0)
    {
        printf("%d", i);
        i--;
    }
}


int main()
{
    Display();
    return 0;
}