#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int u=0,d=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U') u++;
            else d++;
        }
        u=u%2;
        d=d%2;
        if(d==1&&u==0) cout<<"NO"<<endl;
        else if(d==1&&u==1) cout<<"YES"<<endl;
        else if(d==0&&u==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}