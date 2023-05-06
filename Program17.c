// Demonstartion of iteration using for loop

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    //      1          2                3
    for(iCnt = 1;   iCnt <= iValue;  iCnt++)
    {
        printf("Jay Ganesh...\n");  // 4
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
