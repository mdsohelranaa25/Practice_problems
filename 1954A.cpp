#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int rem,isodd;
        if(n%m!=0){
        isodd=n/m+1;
        }
        else isodd=n/m;
        rem=n-isodd;
        if(k<rem) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}