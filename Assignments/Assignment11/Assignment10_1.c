#include<stdio.h>

double CircleArea(float fRadius)
{
   double PI =3.14;
   float fArea = 0.0;

   fArea = PI * fRadius * fRadius;

   return fArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);
   
    return 0;
}