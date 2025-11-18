#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength ,int iNo)
{
    int iCount =0, iCnt= 0 ,iFreq = 0 ;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
             iCount = iCount + 1;
        }
    }

   return iCount;
      
}
int main()
{
    int iSize = 0,iCnt = 0;
    int iRet = 0 , iValue = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d :\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter element to check its frequency :");
    scanf("%d",&iValue);

    iRet = Frequency(p,iSize ,iValue);
    printf("Frequency of %d is %d",iValue,iRet);
  

    free(p);

    return 0;
}