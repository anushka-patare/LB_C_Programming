#include<stdio.h>

int count_factors(int number)
{
    int iCnt=0,iCount=0;
    if(number<0)
    {
        number = -number;
    }
    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if(number%iCnt==0)
        {
            iCount = iCount+1;
        }
    }
    return iCount;
}
int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));
    return 0;
}