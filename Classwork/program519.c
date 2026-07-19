#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;

    char Fname[100] = {'\0'};        // fname is string which is empty

    printf("Enter the name of file : \n");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDWR);

    if(fd != -1)
    {
        printf("File successfully opened\n");

        close(fd);
    }
    else
    {
        printf("There is no such file in directory\n");
    }
    return 0;
}   