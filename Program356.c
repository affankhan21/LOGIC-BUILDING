#include<stdio.h>

void FactorsR(int No)
{
    static int iCnt = 1;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(No);
    }
}

int main()
{
    int Value = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    FactorsR(Value);
    
    return 0;
}