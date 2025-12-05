#include<stdio.h>

int StrCpyRev(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {  
          str++;
    }

    while(str>=temp)
    {
        printf("%c",*str);
        str--;
    }
}
int main()
{
    char Arr[20];
 
    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    StrCpyRev(Arr);

    return 0;

}