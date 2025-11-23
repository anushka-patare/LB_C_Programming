#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j=0;
    char cCount1 = '\0';
    char cCount2 = '\0';
       

    for(i=1; i<=iRow; i++)
    {  
        for(j=1,cCount1 = 'A',cCount2 = 'a'; j<=iCol; j++)
        {
            
            if(i%2!=0)
            {
                printf("%c\t",cCount1);
                cCount1++;
            }
            else
            {
                printf("%c\t",cCount2);
                cCount2++;
            }
        }
        
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