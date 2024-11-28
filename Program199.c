/*
Program to display reverse the string
*/

#include<stdio.h>


void DisplayR(char *str)
{
    char *p = str; //base address pointing to 100 it will traverse till \0 is found and then it'll enter in the while loop

    while(*p != '\0')
    {
        p++;
    }

    p--;

    while(*p != '\0')
    {
        printf("%c\n" , *p);
        p--;
    }

}
int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    DisplayR(Arr);

    return 0;
}