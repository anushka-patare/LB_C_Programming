#include<stdio.h>
#define TRUE 1
#define False 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch>='0'&& ch<='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == 1)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}