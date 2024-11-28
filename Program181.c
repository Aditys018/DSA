/*
take input of character and string from user and
convert smallcase letters to upper case and vice versa

using the manually created function strtogglex

solution

*/


#include<stdio.h>
#include<stdbool.h>


void strtogglex(char *str)
{
   while(*str != '\0')
   {
    if(*str >= 'a' && *str <= 'z')
    {
        *str = *str - 32;
    }
    else if(*str >='A' && *str <='Z')
    {
        *str = *str + 32;  // WRONG CODE coz ASCII will handle every value oter than smallcase, letters,alphabets etc...
    }
    str++;
   }
}

int main()
{
    char Arr[30];
   
    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    strtogglex(Arr);

    printf("String after updation is: %s\n" , Arr);
   

    return 0;

}
