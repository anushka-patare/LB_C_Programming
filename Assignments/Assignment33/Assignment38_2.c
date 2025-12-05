#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
         if(*src == ' ')
        {
            src++;
        }
        else 
        {
            *dest=*src;
            src++; 
            dest++;
        }
       
       
    }
    *dest = *src;
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string:\n");
    scanf("%[^'\n']",Arr);

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}