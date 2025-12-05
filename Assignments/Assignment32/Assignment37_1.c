#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *src, char ch)
{
    int iCount=0;

    while(*src != '\0')
    {
        if(*src==ch)
        {
            iCount++;
            break;
        }
        src++;
    }
    if(iCount>0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = 0;
 
    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet==1)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;

}