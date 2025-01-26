#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0;
    int iFact =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 2; i <= iNo; i += 2)
    {
        if(i % 2 == 0)
        {
            iFact *=i;
        }
    }
    return iFact;
    printf("\n");
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d\n",iRet);

    return 0;
}