#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n-k==0) cout<<0<<endl;
        else if(abs(n-k)<=10){
            cout<<1<<endl;
        }
        else {
            long long m=abs(n-k)/10;
            if(abs(n-k)%10==0)cout<<m<<endl;
            else cout<<m+1<<endl;
        }
    }
}