#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEven =1, iOdd = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEven *=i;
        }
        else
        {
            iOdd *=i;
        }
    }
       return iEven -iOdd;
       printf("\n");
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}