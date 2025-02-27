/*
Accept the character from the user and check whether it is special symbol or not(!,@,$,%,^,&,*)


Input: %

output:  True

Input: d

Output: False


BOOL ChkSpecial(char ch)
{
    //Apply condition to check whether it is special or not
}

int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c" , &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("it is not a special character");
    }
    
    return 0;

}
*/