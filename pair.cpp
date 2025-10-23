#include<bits/stdc++.h>
using namespace std;
int main()
{

    pair<int,string>p1(34,"sohel");

cout<<p1.first<<" "<<p1.second<<endl;

pair<int,string>p2;
p2=make_pair(23,"farjana");
cout<<p2.first<<" "<<p2.second;

cout<<endl;

// pair<int,string>p3(p1);
// cout<<p3.first<<" "<<p3.second<<endl;

p1.swap(p2);
cout<<p1.first<<" "<<p1.second<<endl;
cout<<p2.first<<" "<<p2.second<<endl;



}