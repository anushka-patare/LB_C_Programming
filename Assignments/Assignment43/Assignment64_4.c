#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask7 = 0x00000040, iMask15 = 0x00004000,iMask21 = 0x00100000, iMask28 = 0x08000000;
    
    UNIT iResult1 = 0, iResult2 = 0, iResult3 = 0, iResult4 = 0; 

    iResult1 = iNo & iMask7;
    iResult2 = iNo & iMask15;
    iResult3 = iNo & iMask21;
    iResult4 = iNo & iMask28;
    
    if((iResult1 == iMask7) && (iResult2 == iMask15) && (iResult3 == iMask21) && (iResult4 == iMask28))
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
        printf("7th and 15th and 21st and 28th bit is ON");
    }
    else
    {
        printf("7th and 15th and 21st and 28th bit is OFF");
    }
}