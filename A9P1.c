#include<stdio.h>

double CircleAre(float fRadius)
{
    float PI = 3.14;
    double dArea = 0.0;
    dArea = PI * fRadius* fRadius; 
    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet  = CircleAre(fValue);

    printf("Area of circle %lf\n",dRet);

    return 0;

}