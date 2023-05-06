#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Data[] = {10,20,30,40};
    Display(Data,4);

    char Datac[] = {'a','c','e','w','q'};
    Display(Datac,5);

    return 0;
}