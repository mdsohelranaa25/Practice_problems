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
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
        }
        if(one%2!=0) cout<<"NO"<<endl;
        else if(one==2) {
            for(int i=1;i<n;i++){
                if(s[i]=='1'&&s[i-1]=='1'){ cout<<"NO"<<endl; break;
                }
                else {cout<<"YES"<<endl;
                break;
                }
            }
        }
        
        else cout<<"YES"<<endl;
    }
}