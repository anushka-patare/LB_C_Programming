#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 0;
    iFact = 1;
    int iCnt = 0;
    iCnt = iNo;
    while(iCnt>=1)
    {
          iFact = iFact * iCnt;
          iCnt--;
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is : %d",iRet);

    return 0;
}

//Time Complexity O(N)