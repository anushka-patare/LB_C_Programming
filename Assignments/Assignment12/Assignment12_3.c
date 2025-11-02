#include<stdio.h>

int sum_of__factors(int number)
{
    int iCnt=0,iSum=0;
    if(number<0)
    {
        number = -number;
    }
    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if(number%iCnt==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    printf("%d\n",sum_of__factors(number));
    return 0;
}