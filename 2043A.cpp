#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll count=1;
        cin>>n;
        ll have=n;
        while(have>3){
            have/=4;
        
            count*=2;
        }
        cout<<count<<endl;
    }
}