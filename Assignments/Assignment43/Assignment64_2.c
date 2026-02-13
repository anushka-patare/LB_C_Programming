#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask5 = 0x00000010;
    UNIT iMask18 = 0x00020000;

    UNIT iResult1 = 0;
    UNIT iResult2 = 0;

    iResult1 = iNo & iMask5;
    iResult2 = iNo & iMask18;

    if((iResult1 == iMask5) && (iResult2 == iMask18))
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

    if(bRet == 1)
    {
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("5th and 18th bit is OFF");
    }
    

}