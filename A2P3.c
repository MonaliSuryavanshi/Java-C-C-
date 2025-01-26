#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
        iNo >10;
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
