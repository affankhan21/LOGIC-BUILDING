#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%c is a small case letter\n",cValue);
    }
    else
    {
        printf("%c is not a small case letter\n",cValue);

    }
    return 0;
}