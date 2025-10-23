#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x=345.12345678912324;
    double a=3343.123456789023456;
    long double aa=343434.123456789012345678;
cout<<setprecision(20);
    cout<<"float="<< x<<endl;
    cout<<"double="<<a<<endl;
    cout<<"long double="<<aa<<endl;

cout<<numeric_limits<float>::digits10<<endl;
cout<<numeric_limits<double>::digits10<<endl;
cout<<numeric_limits<long double>::digits10<<endl; 
    return 0;
}