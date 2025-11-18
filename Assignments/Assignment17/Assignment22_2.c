#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCount1 =0, iCount2=0, iCnt= 0 ,iFreq = 0 ;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        
    }
    iFreq = iCount1 - iCount2;
    return iFreq;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
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

    iRet = Frequency(p,iSize);
    printf(" Frequency is %d",iRet);

    free(p);

    return 0;
}