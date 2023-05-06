#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int ans = 0;
    ans = i + j;

    return ans;
}

int main()
{
    int a = 11, b = 10, ret = 0;

    ret = Addition(a,b);

    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}