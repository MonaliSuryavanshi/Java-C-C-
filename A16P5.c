#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{ 
    int i = 0, iSum = 0, iNo = 0, iDigit = 0;

    for(i = 0; i < iLength; i++)
    {
        iNo = Arr[i];
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo/ 10;
        }
        printf("%d\t",iSum);
    }
    printf("\n");
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p =(int *)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt ++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    DigitsSum(p, iSize);

    free(p);

    return 0;
}



