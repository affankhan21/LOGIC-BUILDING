#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

void DisplayR(PNODE First)
{
    if(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
        DisplayR(First);
    }
}

void DisplayReverse(PNODE First)
{
    if(First != NULL)
    {
        DisplayReverse(First->next);
        printf("| %d |-> ",First->data);
    }
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

int CountR(PNODE First)
{
    static int iCnt = 0;

    if(First != NULL)
    {
        iCnt++;
        First = First -> next;
        CountR(First);
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);

    DisplayReverse(Head);

    iRet = CountR(Head);
    printf("\nNumber of nodes are : %d\n",iRet);

    return 0;
}
