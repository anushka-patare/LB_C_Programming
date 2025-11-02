#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iFact1 = 0,iFact2 = 0,iCnt=0;
    int iDiff = 0;
    iFact1 = 1;
    iFact2 = 1;

    iCnt=iNo;
    while(iCnt>=1)
    {
        if(iCnt%2==0)
        {
           iFact1 = iFact1 * iCnt;
        }
        else
        {
           iFact2 = iFact2 * iCnt;
        }
        iCnt--;
    }
   iDiff = iFact1 - iFact2;
   return iDiff;
}
  
int main()
{
     int iValue=0,iRet = 0;
     printf("Enter number:");
     scanf("%d",&iValue);

     iRet = FactorialDiff(iValue);

     printf("Factorial difference is %d",iRet);

     return 0;
}

//Time Complexity O(N/2)