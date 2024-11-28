/*
take input of character and string from user and
replace smallcase letters to upper case

using the manually created function strlwrx

*/


#include<stdio.h>
#include<stdbool.h>


void strlwx(char *str)
{
   while(*str != '\0')
   {
    if(*str >= 'A' && *str <= 'Z')
    {
        *str = *str - 32;
    }
    str++;
   }
}

int main()
{
    char Arr[30];
   
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    strlwx(Arr);

    printf("String after updation is: %s\n" , Arr);
   

    return 0;

}
