#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)
float Average(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;
    //      1           2          3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];    // 4
    }
    return (iSum / iSize);  // (150 / 5)    30.00
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    float fRet = 0.0f;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5 * 4)
    printf("Please enter the numbers : ");
    //    1         2       3
    for(i= 0; i< iLength; i++)
    {
        scanf("%d",&ptr[i]);    // 4
    }
    // fRet = Average(500, 5);
    fRet = Average(ptr, iLength);
    printf("Average is : %f\n",fRet);

    free(ptr);  // free(500)
    return 0;
}