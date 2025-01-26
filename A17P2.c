#include<stdio.h>

void Display(int iNo)
{
    int i = 1;
    while(i <= iNo)
    {
        printf("%d\t",i);
        i++;
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

   return 0;
}