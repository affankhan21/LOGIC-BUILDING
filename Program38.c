#include<stdio.h>

// Input : 5
// Output : 5   10  15  20  25  30  35  40  45  50

void DisplayTable(int iNo)
{
    int iCnt = 0;
    printf("_______________________________\n");
    printf("Table of %d is : \n",iNo);
    printf("_______________________________\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
    printf("_______________________________\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the numebr\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}