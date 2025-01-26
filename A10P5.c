#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int i = 0;
    int iSum = 0;
    if( iStart > iEnd)
    {
        printf("Invalid range \n");        
    }
    for(i = iEnd; i >= iStart; i--)
    {
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}