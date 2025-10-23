#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;

string s;
cin>>s;
int amount=0;
int ans=0;
for(int i=0;i<n;i++){
    if(s[i]!='O'){
        amount=0;
    }
    else {
        amount++;
        if(amount==k){
            ans++;
            amount=0;
        }
}









}

cout<<ans;

}

