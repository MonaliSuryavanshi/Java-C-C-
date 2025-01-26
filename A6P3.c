#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int i = 0;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(i = 1; i <=iNo; i++)
    {
        if(iNo %1 == 0)
        {

           iFact = iFact*i;
        }
       printf("%d\t",i);
    }
    
     return iFact;
}
int main()
{
    int iValue = 0,  iRet = 0;
    
    printf("Enter the number ");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d",iRet);

    return 0;
}