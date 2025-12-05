#include<stdio.h>

void Reverse(char *str)
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
 
    printf("Enter string:");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);

    return 0;
}