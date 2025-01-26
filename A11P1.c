#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigt = iNo % 10;
        printf("%d",iDigt);
        iNo = iNo/10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}