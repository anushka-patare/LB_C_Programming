#include<stdio.h>

int Multiply(int a,int b,int c)
{
    int iMult=0;
    if(a==0 || b==0 || c==0)
    {
        return 0;
    }
    else
    {
        iMult = a * b * c;
        return iMult;
    }
}

int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;
    printf("Please enter three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is: %d",iRet);

    return 0;

}

//Time Complexity O(N/2)