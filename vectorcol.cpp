#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;

cout<<"enter the rows number of vector:";
cin>>n;
vector<int>v[n];

for(int i=0;i<n;i++)
{
    cout<<"enter the size of vector " <<i+1<<" :";
    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        int a;
        cin>>a;
        v[i].push_back(a);

    }
}
cout<<"those elements :"<<endl;

for(int i=0;i<n;i++)
{
    for(int j=0;j<v[i].size();j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}











}