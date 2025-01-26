#include<stdio.h>

int CountFour(int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iCount =iNo % 10;
        if(iCount == 4)
        {
           iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CountFour(iValue);

    printf(" Frequency of 4 %d\n",bRet);

    
    return 0;
}