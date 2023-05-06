#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

void SinglyCL::InsertFirst(int no)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void SinglyCL::InsertLast(int no)
{
    //PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void SinglyCL::Display()
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int SinglyCL::Count()
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void SinglyCL::DeleteFirst()
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)    // Single node in LL
    {
        //free(*First);
        delete *First;

        *First = NULL;
        *Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        *First = (*First)->next;
        //free(temp);
        delete temp;

        (*Last) ->next = *First;
    }
}

void SinglyCL::DeleteLast()
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)    // Single node in LL
    {
        //free(*First);
 
        delete *First;

        *First = NULL;
        *Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        while(temp->next != (*Last))
        {
            temp = temp -> next;
        }

        //free(temp->next);   // free(*Last);
        delete temp->next;

        *Last = temp; 
        (*Last) ->next = *First;
    }
}

void SinglyCL::InsertAtPos(int no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    PNODE newn = NULL;
    PNODE temp = *First;

    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        //newn = (PNODE)malloc(sizeof(NODE));
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCL::DeleteAtPos(int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }   
        temp2 = temp1 ->next;

        temp1->next = temp2->next;
        //free(temp2);
        delete temp2;
    }
}

int main()
{
    SinglyCL obj;

    int iRet = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.InsertAtPos(105,5);

    obj.Display();
    iRet = obj.Count();

    printf("Number of elements are : %d\n",iRet);

    obj.DeleteAtPos(5);


    obj.Display();
    iRet = obj.Count();

    printf("Number of elements are : %d\n",iRet);

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    printf("Number of elements are : %d\n",iRet);


    return 0;
}