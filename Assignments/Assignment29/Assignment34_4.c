#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
     if(ch>='a' && ch<='z')
     {
         return 0;
     }
     else if(ch>='A' && ch<='Z')
     {
        return 0;
     }
     else if(ch>='0' && ch<='9')
     {
        return 0;
     }
     else
     {
        return 1;
     }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == 1)
    {
        printf("It is a special character");
    }

    else
    {
        printf("It is not special character");
    }

    return 0;
}