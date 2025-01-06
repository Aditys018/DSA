#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];
    

    printf("enter the filename you want to delete\n");
    scanf("%[^'\n]s, Name");

    unlink(Name);

    return 0;
}