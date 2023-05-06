#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        str++;
        Display(str);
        printf("%c\n",*str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}