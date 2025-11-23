#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j=0;
    char cCount = '\0';

    
    for(i=1,cCount = 'A'; i<=iRow; i++)
    {
        for(j=1;j<=iCol; j++)
        {
            printf("%c\t",cCount);  
        }
        cCount++;
        printf("\n");
      
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows :");
    scanf("%d",&iValue1);

    printf("Enter number of columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}