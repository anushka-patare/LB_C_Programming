#include<stdio.h>
typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo, int iPos)
{
    UNIT iMask = 0x1;

    iMask = iMask << (iPos-1);

    iNo = iNo ^ iMask;

    return iNo;
   
}

int main()
{
    int no = 0, pos = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    printf("Enter position:");
    scanf("%d",&pos);
   
    iRet = ToggleBit(no,pos);

    printf("Updated number is : %d\n",iRet);
      
}