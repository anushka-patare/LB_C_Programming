#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src>='A' && *src<='Z')
        {
            *src = *src  + 32;
            *dest = *src;
        }
        else if(*src>='a' && *src<='z')
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

    printf("Enter string:\n");
    scanf("%[^'\n']",Arr);

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}