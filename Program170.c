/*
program to count small & uppercase case vowels in the string (DON'T USE ASCII)
*/


#include<stdio.h>

int CountVowels(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str =='a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str =='A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
        iCnt++;
        }
        str++;
    }
     
     return iCnt;
}
int main()

{
    char Arr[30];
    int iRet = 0;
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = CountVowels(Arr);

    printf("number of small case vowels are: %d\n" , iRet);

    return 0;

}