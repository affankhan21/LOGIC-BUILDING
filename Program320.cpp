#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
    struct node<T> *  temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    
    SinglyLL <char>cobj;
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');
    cobj.Display();
    iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <int>iobj;
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float>fobj;
    fobj.InsertFirst(21.10f);
    fobj.InsertFirst(11.10f);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <double>dobj;
    dobj.InsertFirst(21.10);
    dobj.InsertFirst(11.10);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}