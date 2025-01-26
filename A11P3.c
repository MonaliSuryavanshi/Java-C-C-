#include<stdio.h>

int CountTwo(int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iCount =iNo % 10;
        if(iCount == 2)
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

    bRet = CountTwo(iValue);

    printf(" Frequency of 2 %d\n",bRet);

    
    return 0;
}