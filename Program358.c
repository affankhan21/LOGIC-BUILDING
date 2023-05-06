#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int No)
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
        CheckPerfect(No);
    }
    if(iSum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&Value);

    bRet = CheckPerfect(Value);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",Value);
    }
    else
    {
        printf("%d is not a perfect number\n",Value);

    }
    return 0;
}