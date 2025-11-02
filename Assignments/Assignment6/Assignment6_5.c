#include<stdio.h>

float Percentage(float fTotalMarks,float fObtMarks)
{
    float fPercent=0;
    if(fTotalMarks == 0 )
    { 
        return 0;
    }
    else
    {
     fPercent = ((float)fObtMarks/(float)fTotalMarks)*100;
     return fPercent;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet =0.0f;
    
    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is :%f",fRet);

    return 0;
}

//Time Complexity O(N/2)