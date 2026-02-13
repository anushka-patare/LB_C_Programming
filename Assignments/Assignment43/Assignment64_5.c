#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iMask1 = 0x1, iMask32 = 0x1;
    
    UNIT iResult1 = 0, iResult2 = 0; 

    iMask32 = iMask32 << 31; 
    
    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask32;
  
    if((iResult1 == iMask1) && (iResult2 == iMask32))
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
        printf("1st and 32th bit is ON");
    }
    else
    {
        printf("1st and 32th bit is OFF");
    }
}