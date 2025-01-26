#include<stdio.h>

int Count(int iNo)
{
    int iCount = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iCount =iNo % 10;
        if(iCount < 6)
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

    bRet = Count(iValue);

    printf(" Frequency of less than six : %d\n",bRet);

    
    return 0;
}