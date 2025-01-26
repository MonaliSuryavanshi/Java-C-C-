#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool CheackEven(int iNo)
{
    if(iNo % 2 ==0)
    {
        printf("The given number is Even");
    }
    else
    {
        printf("The given number is Odd");
    }

}
int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheackEven(iValue);
    
     return 0;
}