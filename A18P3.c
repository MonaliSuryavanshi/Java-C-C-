#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 2; iCnt <=iNo; iCnt++)
    {
        iFact *=iCnt;
    }
    return 0;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is %d",iRet);

    return 0;
}