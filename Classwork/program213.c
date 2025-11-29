#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter yhour name: \n");
    scanf("%[^'\n]s",Name);
    printf("Hello :%s\n",Name);
    
    return 0;
}