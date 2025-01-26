#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int i = 0, iMin =Arr[0], iMax = Arr[0], iDiff = 0;

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > iMax )
        {
           iMax = Arr[i]; 
        }
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    
    }
    return iDiff = iMax - iMin;
    
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
    iRet = Difference(p, iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}



