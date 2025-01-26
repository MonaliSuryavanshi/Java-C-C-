#include<stdio.h>

void Pattern(int iNo)
{ 
    char ch = 'A';
    int i = 0;
    for(i = 1; i<= iNo; i++)
    {
        printf("%c\t",ch);
        ch++;
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