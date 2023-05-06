#include<stdio.h>


int Summation()
{
    int iSum = 0;

    iSum = iSum + 1;
    iSum = iSum + 2;
    iSum = iSum + 3;
    iSum = iSum + 4;
    iSum = iSum + 5;
 
    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}