// 4
// a    b   c   d      

#include<stdio.h>
// ASCII
// American Standard Code for Information Interchange
void Display(int iNo)   // N
{
    int iCnt = 0;
    char ch = 'a';

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);   
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}