#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("enter filename\n");
    scanf("%[^'\n]s" , Name);


    fd = creat(Name , 0777);
    if(fd == -1)
    {
        printf("unaable to create file\n");

    }
    else
    {
        printf("file succesfully created with FD %d\n" , fd);
        close(fd);
    }

    return 0;
}