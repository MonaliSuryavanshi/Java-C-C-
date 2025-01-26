#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    int i = 1;
    for(i = 1;  i  <= iNo/2;  i++)
    {
        if(iNo % i ==0)
        {
            iMult *=i;
        }
    }
    return iMult;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}