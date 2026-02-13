#include<stdio.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT ToggleBit(UNIT iNo)
{
    UNIT iMask = 1;

    iMask = 0x00000240;

    iNo = iNo ^ iMask;

    return iNo;

   
}

int main()
{
    int no = 0, iRet = 0,pos = 0;

    printf("Enter number :");
    scanf("%d",&no);

    iRet = ToggleBit(no);

    printf("updated number is : %d\n",iRet);

    return 0;
}