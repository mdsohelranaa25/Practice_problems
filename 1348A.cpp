#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll mul=2;
        ll n;
        cin>>n;
        int odd=0,even=0;
        if(n==2) cout<<2<<endl;
        else{
        for(int i=1;i<n/2;i++) odd+=pow(2,i);
        odd+=pow(2,n);
        
        for(int i=n/2;i<n;i++){
            even+=pow(2,i);
        }
        cout<<abs(odd-even)<<endl;
        }
        
    }
}