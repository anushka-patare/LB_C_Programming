#include<stdio.h>

typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT OffBit(UNIT iNo)
{
    UNIT iMask = 0;

    iMask = 0xffffffbf;

    iNo = iNo & iMask;

    return iNo;

   
}

int main()
{
    int no = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    iRet = OffBit(no);

    printf("updated number is : %d\n",iRet);

    return 0;
}