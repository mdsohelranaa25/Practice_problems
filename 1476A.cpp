#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endd cout<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
 void solve(){
     ll n,m;
     cin>>n>>m;
     if(m<n) {
        int a=(m+n-1)/m;
        m*=a;
     }
     
     m=m+n-1;
     cout<<m/n<<endl;
 }
 int main(){
    int t;
    cin>>t;
    while(t--) solve();
 }