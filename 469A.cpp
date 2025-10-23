#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>v;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int nn;
        cin>>nn;
        v.insert(nn);
    }
    int mm;
    cin>>mm;
    for(int i=0;i<mm;i++){
        int nn;
        cin>>nn;
        v.insert(nn);
    }
    
    if(v.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}