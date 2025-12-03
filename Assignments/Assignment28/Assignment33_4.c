#include<stdio.h>
#define TRUE 1
#define False 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch>='a'&& ch<='z')
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

    bRet = ChkSmall(cValue);

    if(bRet == 1)
    {
        printf("It is Small case Chracter");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}