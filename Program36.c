#include<stdio.h>

// Input : 6
// Output : 4   5

// Input : 15
// Output : 2   4   6    7   8  9   10  11  12  13  14

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    printf("Non factors of %d are : \n",iNo);
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the numebr\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}