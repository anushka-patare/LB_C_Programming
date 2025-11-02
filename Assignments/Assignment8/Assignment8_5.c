#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 0;
    int  iTable = 0;

    for(iCnt = 10; iCnt>=1; iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d\t",iTable);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);
  
    return 0;

}

//Time complexity O(N)