#include<iostream>
using namespace std;

template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void Display();
        int Count();
};

int main()
{
    
    return 0;
}