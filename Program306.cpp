#include<iostream>
using namespace std;

// call by address
void Swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 11, b = 10;

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    Swap(&a,&b);       

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    return 0;
}