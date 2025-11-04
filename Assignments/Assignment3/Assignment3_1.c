/*
    Algorithm
    START
        Accept number input as iNo
        If input is negative then return
        Check iNo is even 
        Display iNo on screen
        STOP
*/

//////////////////////////////////////////////////////////////////
//
//   Required header files
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name  : PrintEven
//  Description    : It is used to print  n even numbers
//  Input          : int
//  Output         : int
//  Author         : Anushka Ramesh Patare
//
//////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1; iCnt<=iNo*2 ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {  
            printf("%d",iCnt);
        }  
    }
}
//////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d  ",&iValue);

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
// 
//  Test cases successfully handled by the applications
//
// Input :  7    Output : 2 4 6 8 10 12 14
// Input :  4    Output : 2 4 6 8 
//
//////////////////////////////////////////////////////////////////