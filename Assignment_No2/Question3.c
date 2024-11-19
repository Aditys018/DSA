/*
3. Accept one number from user if number is less than 10 then print "Hello" else print "Demo"
_______________________________________________________________________________________________


______Display(______iNo)
{
    if(_______<__________)
    {
        printf("Hello");
    
    }
    else
    {
        printf("_______");
    }
}

int main()
{
    int iValue = 0;

    printf("enter number");
    scanf("_____",&______);

    Display(iValue);

    return 0;

}
*/
#include<stdio.h>

int Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
