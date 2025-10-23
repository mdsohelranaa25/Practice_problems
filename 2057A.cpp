#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(n>m){
            long long temp=n;
            n=m;
            m=temp;
        }
        cout<<m+1<<endl;
    }
}