#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0;
    iFact = 1;

    iCnt = iNo;
    while(iCnt>=1)
    {
        if(iCnt%2==0)
        {
            iFact = iFact * iCnt;
        }
        iCnt--;
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
     
    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
//Time Complexity O(N)