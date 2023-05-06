// Demonstartion of iteration using for loop

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;       // 1
    while(iCnt <= iValue)    // 2
    {
        printf("Jay Ganesh...\n");  // 4
        iCnt++;     // 3
    }
}

int main()
{
    int iNo = 0;

    printf("Enter number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}