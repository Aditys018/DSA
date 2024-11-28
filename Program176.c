/*
take input of character and string from user and
check weather the character is present in string or not


*/


#include<stdio.h>
#include<stdbool.h>


bool Count(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
        bFlag = true;
        }
        str++;
    }
     
     return bFlag;
}

int main()
{
    char Arr[30];
    bool bRet = false;
    char cValue = '\0';
    

    printf("Enter string: \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the character to be searched:\n");
    scanf(" %C" , &cValue);  // just specify single space to eliminate the error hya space mule buffer madhe urlela enter hota  to nullify zala and the second char was accepted

    bRet = Count(Arr , cValue);
    if(bRet == true)
    {
        printf("present");
    }
    else
    {
        printf("not present");
    }

    printf("number of character: %d\n" , bRet);

    return 0;

}
