#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;
    
    while(*str !='\0')
    {
        if((*str>='A') && (*str<='Z'))
        { 
            iCountCapital++;
        }
        else if((*str>='a') && (*str<='z'))
        {
            iCountSmall++;
        }   
    
        str++;  
    }
     printf("Count of capital characters are: %d\n",iCountCapital);
     printf("Count of small characters are: %d\n",iCountSmall);
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    CountAll(Arr);
 
    return 0;
}