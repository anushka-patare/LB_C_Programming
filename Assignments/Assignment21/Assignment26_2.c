//Input : 5
//Output : 5 # 4 # 3 # 2 # 1  #
//iCnt     1 2 3 4 5 6 7 8 9 10

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt= 0;
    int iCount = 0;
    iCount =  iNo;
    for(iCnt=1; iCnt<=iNo*2; iCnt++)
    {
        if(iCnt%2 ==0)
        {
            printf("#\t");
        }
        else
        {
            printf("%d\t",iCount);
            iCount--;
        }
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}