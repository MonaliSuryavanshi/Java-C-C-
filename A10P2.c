#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range \n");
        return;
    }
    for(i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        printf("%d\t",i);
    }
    printf("\n");

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}