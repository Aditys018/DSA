#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("enter filename you want to open\n");
    scanf("%[^'\n]s" , Name);


    fd = open(Name , O_RDWR);

    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("file succesfully opened with FD %d\n" , fd);

        iRet = read(fd,Arr,5);

       
        printf("%d bytes gets successfully written into the file\n" , iRet);

        printf("data from the file is\n", iRet);

        printf("data from file is :%S\n", Arr);

        close(fd);
    }

    return 0;
}