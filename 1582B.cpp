#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        sum+=x;
        cin>>x;
        mp[x]++;
    }
    int one=mp[1];
    int zero=mp[0];
    ll xr=pow(2,mp[0]);
    cout<<one*xr<<endl;

   
   
   

    }

}