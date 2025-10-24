#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
     int iCnt = 0;
     bool bFlag = false;

     if(iNo< 0)
     {
        iNo = -iNo;
     }
     
     for(iCnt = 2 , bFlag = true; iCnt<=(iNo/2); iCnt++)
     {
        if(iNo%iCnt == 0)
        {
            bFlag = false;
            break;                  //Optimization due to break
        }
     }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue);
    
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not prime number\n",iValue);
    }

    return 0;
}

/* 
Time complexity for prime is  - N/2
Time complexity for non prime is -  either 1 or 2
*/