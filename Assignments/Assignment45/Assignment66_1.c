#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo, int iPos)
{
    UNIT iMask = 0x1;

    UNIT iResult = 0;

    iMask = iMask << (iPos-1);

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
    int no = 0, pos = 0;

    BOOL bRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    printf("Enter position:");
    scanf("%d",&pos);
   
    bRet = ChkBit(no,pos);

    if(bRet == 1)
    {
        printf("TRUE");
    }
    else
    {  
        printf("FALSE");
    }
   
}