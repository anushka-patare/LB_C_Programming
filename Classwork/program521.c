#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[100] = {'\0'};        // fname is string which is empty
    char Buffer[100] = {'\0'};       // for reading data

    printf("Enter the name of file : \n");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDWR);

    if(fd != -1)
    {
        printf("File successfully opened\n");

        printf("Data from file is :\n");

        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)   // iRet madhe aanun deto kiti bytes read kelya
        {
            write(1,Buffer,iRet);    // Screen var write karte kay data read kela 
        }
       
        printf("\n");
        close(fd);
    }
    else
    {
        printf("There is no such file in directory\n");
    }
    return 0;
}   