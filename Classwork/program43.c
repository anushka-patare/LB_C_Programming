// Input 12  2     Output :true
// Input  12 3     Output : true
// Input 12 5      Output :false

#include<stdio.h>

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter second number:");
    scanf("%d",&iValue2);
      
    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible\n");
    }
    else
    {
         printf("It is not divisible.\n");
    }

    return 0;

}