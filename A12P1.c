#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEvenCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenCount++;
        }
        iNo = iNo/10;
    }
    return iEvenCount;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf(" Count of even digits : %d\n",iRet);

    
    return 0;
}