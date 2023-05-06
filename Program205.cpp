#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
};

int main()
{   
    int iValue = 0;

    cout<<"Please enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    cout<<obj.iNo<<"\n";
    
    return 0;
}