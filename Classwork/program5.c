#include<stdio.h>

int main()
{
    int i = 0  , j = 0 , iAns = 0;

    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number :\n");
    scanf("%d",&j);

    iAns = i + j;  //Business logic

    printf("Addition is : %d\n",iAns);

    return 0;
}