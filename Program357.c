#include<stdio.h>

int SumFactorsR(int No)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactorsR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0, Ret = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    Ret = SumFactorsR(Value);
    printf("Summation of factors : %d\n",Ret);

    return 0;
}