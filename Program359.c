#include<stdio.h>
#include<stdbool.h>

int CountDigitsI(int No)
{
    int iCnt = 0;

    while(No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return iCnt;
}

int main()
{
    int Value = 0, iRet = 0;;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = CountDigitsI(Value);

    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}