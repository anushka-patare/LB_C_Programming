#include<stdio.h>
#include<stdlib.h>

typedef  int * IPTR;

int FrequencyCalculate(int Arr[],int iSize, int iNo)
{
    int iCnt = 0,iCount = 0;

    
    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
         if(Arr[iCnt] == iNo)
         {
            iCount = iCount + 1;
         }
    }
    
     return iCount;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0 , iValue = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));
    
    if(iPtr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the values:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to calculate frequency :  ");
    scanf("%d",&iValue);

   // Step 2 : Use the memory
   
   iRet = CalculateFrequency(iPtr,iLength,iValue);

   printf("Frequncy of %d is :%d\n",iValue,iRet);

   
   // Step 3 : Free the memory

   free(iPtr);

    return 0;
}