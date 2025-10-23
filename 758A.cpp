#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v;
    int m;
    for(int i=0;i<a;i++){
        cin>>m;
        v.push_back(m);
    }
    sort(v.rbegin(),v.rend());
    int count=0;
    int max=v[0];
    for(int i=0;i<a;i++){
        count=count+(max-v[i]);
    }
    cout<<count;
}