#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

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
        write(fd,"Jay Ganesh" , 10);

        close(fd);
    }

    return 0;
}