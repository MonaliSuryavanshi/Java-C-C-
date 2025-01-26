#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;
    while(i <= iNo)
    { 
        if(i % 2 != 0)
        {
           printf("%d\t",i);
        }
        i++;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}