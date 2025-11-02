#include<stdio.h>

void CheckLeapYear(int year)
{

     if(year%4 == 0)
     {
        printf("Year is leap");
     }
     else
     {
        printf("Year is not leap");
     }
}
int main()
{
    int yr;
    printf("Enter year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);
    return 0;

}