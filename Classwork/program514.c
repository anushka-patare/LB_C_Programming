#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};   // data ha buffer madhe read houn yenar
    char Arr[10] = {'\0'};

    fd = open("JanuaryX.txt",O_RDONLY);   

    if(fd != -1)
    {
        printf("File gets opened with FD : %d\n",fd);

        iRet = read(fd,Buffer,11);

        printf("Data from file is : %s\n",Buffer);
        printf("Return value of read is : %d\n",iRet);

        iRet = read(fd,Arr,10);         // current file he pudhcha data aanun dete jar close keleli nasel tar

        printf("Data from file is : %s\n",Arr);
        printf("Return value of read is : %d\n",iRet);

        close(fd);
    }


    return 0;
}   