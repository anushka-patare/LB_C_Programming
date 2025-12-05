#include<stdio.h>

void StrCpyRev(char *str, char * dest)
{
    char *start = str;
    char *end = str;
    char *ptr = dest;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= start)
    {
        *dest = *end;
        end--;
        dest++;
    }
    
}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    StrCpyRev(Arr,Brr);

    printf("%s",Brr);

    return 0;
}