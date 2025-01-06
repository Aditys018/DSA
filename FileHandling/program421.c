#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];
    int iRet = 0;

    printf("enter filename\n");
    scanf("%[^'\n]s" , Name);


    fd = open(Name , O_RDWR);

    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("file succesfully opened with FD %d\n" , fd);

        iRet= write(fd,"Jay Ganesh" , 10);
        printf("%d bytes gets successfully written into the file\n" , iRet);

        close(fd);
    }

    return 0;
}