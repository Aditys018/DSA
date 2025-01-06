#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Arr[20];
    char Name[30];
    int fd = 0;
    

    printf("enter the filename you want to delete\n");
    scanf("%[^'\n]s, Name");

    fd = open(Name,O_RDONLY);

    read(fd,Arr,8);

    printf("data from the file is:%s\n" , Arr);

    return 0;
}