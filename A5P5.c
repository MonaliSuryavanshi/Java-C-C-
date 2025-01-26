#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;
    for(i =1; i <= 5; i++ )
    { 
        {
           printf("%d\t",i*iNo);
        }
    
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}