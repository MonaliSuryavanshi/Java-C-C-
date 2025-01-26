#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2)!= 0)
        {
            iFact*= iCnt;
        }
    }
    return iFact;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd factorial of number is %d\n",iRet);

    return 0;
}