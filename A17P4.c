#include <stdio.h>

void OddDisplay(int iNo)
{
    int icnt = 1;
    while(icnt <= iNo)
    {
        if((icnt % 2) != 0)
        {
            printf("%d\t",icnt);
        }
        icnt++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}