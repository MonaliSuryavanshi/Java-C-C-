#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("$ *\t",i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}