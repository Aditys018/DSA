/*
    Accept number of rows and columns from the user and display below pattern

    Input: iRow = 6  iCol = 6

    Output:
    *  *  *  *  *  *
    *  #  #  #  *  *
    *  #  #  *  $  *
    *  #  *  $  $  *
    *  *  $  $  $  *
    *  *  *  *  *  *
    

    Program layout:

    #include<stdio.h>

    void Pattern(int iRow, int iCol)
    {
        //Logic
    }

    int main()
    {
        int iValue1 = 0, iValue2 = 0;

        printf("Enter number of rows and columns");
        scanf("%d %d", &iValue1, &iValue2);
        
        return 0;
        
    }

*/


#include<stdio.h>

void pattern(int iRow, int iCol)
{
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d%d" , &iValue1, &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}