#include<stdio.h>
#define TRUE 1
#define False 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch>='A'&& ch<='Z')
    {
        return 1;
    }
    else if( ch>='a'&& ch<='z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == 1)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }
    return 0;
}