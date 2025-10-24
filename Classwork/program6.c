#include<stdio.h>

int Add(int A , int B)
{
    int sum = 0;
    sum = A + B;            //Business Logic
    return sum;
     
}

int main()
{
    int i = 0  , j = 0 , iAns = 0;

    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number :\n");
    scanf("%d",&j);

    iAns = Add(i,j);

    printf("Addition is : %d\n",iAns);

    return 0;
}