#include<stdio.h>


void Display(char str[])   //___________
{
    int i = 0;
    
    printf("Entered string is : \n");

   for(i =0; str[i] != '\0'; i++)
   {
    printf("%C\n" , str[i]);
   }
}
int main()
{
    char Arr[30];

    printf("Enter string:\n");
    scanf("%[^'\n']s" , Arr);   //special scanf, accept input til you find the enter key

    Display(Arr);

    return 0;
}