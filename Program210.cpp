#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1, int iNo2)
{
    // Logic
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Numbers are anagram"<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram"<<"\n";
    }
    return 0;
}