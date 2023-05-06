#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int i);
        void Accept();
        void Display();
};

/*
    ReturnValue ClassName :: FunctionName()
    {

    }
*/

template <class T>
ArrayX <T> :: ArrayX(int i)
{
    iSize = i;
    Arr = new T[iSize];
}

template <class T>
void ArrayX <T>:: Accept()
{
    cout<<"Enter the elements : "<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX <T>:: Display()
{
    cout<<"Elements of the array are : "<<"\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();

    ArrayX <double>obj2(5);
    obj2.Accept();
    obj2.Display();

    return 0;
}