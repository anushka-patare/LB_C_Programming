#include<stdio.h>

int FindMax(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1 , num2, result;
    
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximum number is : %d\n",result);

    return 0;
}