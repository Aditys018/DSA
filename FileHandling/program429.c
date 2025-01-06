#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Arr[20] {'\0'};
    char Name[30];
    char Brr[20];
    int fd = 0;
    

    printf("enter the filename you want to delete\n");
    scanf("%[^'\n]s, Name");

    fd = open(Name,O_RDONLY);

    read(fd,Arr,8);

    printf("data from the file is:%s\n" , Arr);

    read(fd,Brr,5);

    printf("Data from the file is: %s\n" , Brr);

    return 0;
}