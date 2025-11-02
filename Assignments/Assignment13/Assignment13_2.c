#include<stdio.h>

void print_even_numbers(int limit)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int limit;

    printf("Enter number:");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}