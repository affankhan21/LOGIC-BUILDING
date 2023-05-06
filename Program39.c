#include<stdio.h>

// Input : 5
// Output : 5   4   3   2   1   
void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("----------------------------------\n");
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n----------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}