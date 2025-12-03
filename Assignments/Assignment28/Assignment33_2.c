#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch>='A'&& ch<='Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == 1)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }
    return 0;
}