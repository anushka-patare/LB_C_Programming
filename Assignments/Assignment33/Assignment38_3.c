#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src>='a' && *src<='z')
        {
                *src = *src - 32;
                *dest = *src;
                
        }
        else if(*src>='A' && *src<='Z')
        {
            *dest = *src;
        }

        src++;
        dest++;

    }
    *dest = *src;
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}