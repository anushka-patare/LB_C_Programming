// Input 10
// 2 4 6 8 10


#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=2 ; iCnt<=iNo; iCnt += 2)
    {  
        printf("%d\t",iCnt);
      
    }

}

// Time complexity : O(N/2)

int main()
{

    int iValue = 0;
    printf("Please enter frequency : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}