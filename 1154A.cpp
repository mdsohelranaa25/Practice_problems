#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<4;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    int a=v[3]-v[0];
    int b=v[1]-a;
    int c=v[2]-a;
    cout<<a<<" "<<b<<" "<<c;
}