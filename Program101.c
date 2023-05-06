/*
    Row = 4
    Col = 4

    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}