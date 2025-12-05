#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str=='a'|| *str == 'e' ||*str == 'i' ||*str == 'o' ||*str == 'u' ||
           *str == 'A' ||*str == 'E' ||*str == 'I' ||*str == 'O' ||*str == 'U')
        {
            iCount++;
        }
        str++;
    }
    
    if(iCount>0)
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
    char Arr[20];
    BOOL bRet = 0;
    
    printf("Enter string:");
    scanf("%[^\n]s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet==1)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}