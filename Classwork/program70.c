// Iteration

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit =0,iSum = 0;

    while(iNo != 0)         
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iDigit + iSum;

    }

    return iSum;
   
}
int main()
{

    int iValue = 0;
    int iRet = 0;
   
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);
    printf("Some of digits is : %d\n",iRet);
   
    return 0;
}