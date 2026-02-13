#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask = 0, iResult = 0;

    iMask = 0x00004000;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int no = 0;

    BOOL bRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    bRet = ChkBit(no);

    if(bRet==1)
    {
        printf("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }

}