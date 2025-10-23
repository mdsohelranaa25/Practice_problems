#include<bits/stdc++.h>
using namespace std;
bool lucky(int n);
int main(){
    int n,nn;
    cin>>n>>nn;
    vector<int>v;
    for(int i=n;i<=nn;i++){
        if(lucky(i)){
            v.push_back(i);

        }
    }
    if(v.empty()) cout<<"-1";
    else for(auto it:v){
        cout<<it<<" ";
    }
}
bool lucky(int n){
    while(n>0){
        int m=n%10;
if(m%10!=4&&m%10!=7){
    return false;
}
n=n/10;
    }
    return true;
}