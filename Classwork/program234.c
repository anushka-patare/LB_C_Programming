#include<stdio.h>

void CountWhiteSpaces(char str[])
{
    int iCount = 0 ;
    
    while(*str !='\0')
    {
        if((*str==' '))
        { 
            iCount++;
        }
        
        str++;  
    }
     printf("Number of white spaces are: %d\n",iCount);
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    CountWhiteSpaces(Arr);
 
    return 0;
}