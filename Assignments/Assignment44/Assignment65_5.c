#include<stdio.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT OnBit(UNIT iNo)
{
    UNIT iMask = 0;

    iMask = 0x0000000f;

    iNo = iNo | iMask;

    return iNo;

   
}

int main()
{
    int no = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    iRet = OnBit(no);

    printf("updated number is : %d\n",iRet);

    return 0;
}