#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll cc=0;
        unordered_map<ll,ll> freq;
        for(int i=n-1;i>=0;i--){
            freq[arr[i]]++;
            if(freq[arr[i]]>1) break;
            else cc++; 
        }
        cout<<n-cc<<endl;
    }
}