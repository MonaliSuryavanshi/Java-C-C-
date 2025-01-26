#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;
    int i = 0;
    for(i = 1;  i  <= iNo/2;  i++)
    {
       if(iNo % i == 0)
       {
           iSumFact =iSumFact+i;
       }
    }
    for(i = 1;  i  <= iNo;  i++)
    {
       if(iNo % i != 0)
       {
           iSumNonFact =iSumNonFact+i;
       }
    }
    return iSumFact-iSumNonFact;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}