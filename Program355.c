#include<stdio.h>

void FactorsI(int No)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int Value = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    FactorsI(Value);
    
    return 0;
}