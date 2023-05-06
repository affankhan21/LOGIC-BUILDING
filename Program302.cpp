#include<iostream>
using namespace std;

double Addition(double i, double j)
{
    double ans = 0.0;
    ans = i + j;

    return ans;
}

int main()
{
    double a = 11.9, b = 10.1, ret = 0.0;

    ret = Addition(a,b);

    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}