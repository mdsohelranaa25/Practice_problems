#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(auto &it:arr) cin>>it;
        ll count=arr[n-2];
        for(ll i=n-3;i>=0;i--){
            count-=arr[i];
        }
        
        ll sum=arr[n-1]-count;
        cout<<sum<<endl;
    }
}