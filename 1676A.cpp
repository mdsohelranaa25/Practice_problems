#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int m=s[0]+s[1]+s[2];
        int p=s.length()-1;
        int pp=s[p]+s[p-1]+s[p-2];
        if(m==pp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}