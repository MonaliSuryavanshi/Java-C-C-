#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 70;
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        if(i =INR*iNo)
       {
           printf("%d\n",i);
       }
    }
    return (iNo);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}
