/*
    Algorithm
        START
            Accept input as iNo
            If the input is negative convert it into positive
            Check even factors of iNo
            Display the even factors on screen
        STOP
*/

//////////////////////////////////////////////////////////////////
//
//  Required header files
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactors
//  Description   : It is used to display even factors of number
//  Input         : int 
//  Output        : int
//  Author        : Anushka Ramesh Patare
//
//////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i<= iNo/2;i++)
    {
        if(iNo%i==0 && i%2==0)
        {
            printf("%d ",i);
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

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayEvenFactors(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////
//  
//  Test cases successfully handled by the application
// 
//   Input : 12     Output : 2 4 6
//   Input : 18     Output : 2 6
//
////////////////////////////////////////////////////////////////// 