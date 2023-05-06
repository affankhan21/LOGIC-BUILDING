#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iEvenCnt = 0, iDigit = 0;
    
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
    return iEvenCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    iRet = CountEvenDigits(iValue);
    printf("Number of even digits are: %d\n",iRet);

    return 0;
}

// 08988
