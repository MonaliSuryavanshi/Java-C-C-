#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for(i = iNo; i >= 1 ; i--)
    {
        printf("%d #\t",i);
        
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}