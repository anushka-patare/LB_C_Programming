#include<stdio.h>

void Display(int *Arr)
{

    int iCnt = 0;
  
    for(iCnt=0;iCnt<4;iCnt++)
    {
       printf("%d\n",Arr[iCnt]); // Simple Array *Arr points to Arr array
       
       
    } 
}
int main()
{
    int Brr[] = {10,20,30,40};
   
   
    Display(Brr);
    
    return 0;
}