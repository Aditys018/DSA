/*
FILE HANDLING

creating file statically
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt" , 0777);

    if(fd == -1){
        printf("unaable to create file\n");

    }
    else
    {
        printf("file succesfully created\n");
    }

    return 0;
}