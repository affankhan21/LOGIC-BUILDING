#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOddSum(int Arr[], int iSize)
{
    int iCnt =0, iEvenSum = 0, iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of even elements are : %d\n",iEvenSum);
    printf("Summation of odd elements are : %d\n",iOddSum);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOddSum(ptr, iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}