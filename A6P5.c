#include<stdio.h>

void TableRev(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    for(i = 10; i >= 1; i--)
    {
          printf("%d\t",iNo*i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number ");
    scanf("%d",&iValue);
    
    TableRev(iValue);

    return 0;
}