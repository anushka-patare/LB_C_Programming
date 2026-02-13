#include<stdio.h>
typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
    UNIT iMask = 0x1;

    iMask = 0x00000009;

    iNo = iNo ^ iMask;

    return iNo;
   
}

int main()
{
    int no = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&no);

    iRet = ToggleBit(no);

    printf("Updated number is : %d\n",iRet);
      
}