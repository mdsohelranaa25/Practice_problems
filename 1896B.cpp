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
        int f=n-1,l=0;//f=first,l=last index
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            f=i;
            break;
        }
    }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B') {
                l=i;
                break;
            }
        }
        if(f>l) cout<<0<<endl;
        else {
            cout<<l-f<<endl;
        }

    }
    }
