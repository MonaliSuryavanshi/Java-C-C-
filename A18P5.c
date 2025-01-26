#include<stdio.h>

int FactorialDiff(int iNo)
{
    int Evenfact = 1,Oddfact = 1;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            Evenfact *=iCnt;
        }
        else 
        {
            Oddfact *=iCnt;
        }
    }
    return Evenfact-Oddfact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d\n",iRet);

    return 0;
}