#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Arr[20] = {'\0'};
    char Name[30];
    char Brr[20] = {'\0'};
    int fd = 0;
    

    printf("enter the filename you want to delete\n");
    scanf("%[^'\n]s, Name");

    fd = open(Name,O_RDONLY);

    lseek(fd,5,SEEK_SET);

    read(fd,Arr,10);

    printf("data from file is: %s\n", Arr);

    lseek(fd,5,SEEK_CUR);

    read(fd,Brr,10);

    printf("Data from file is %s\n", Brr);

    close(fd);

    return 0;
}