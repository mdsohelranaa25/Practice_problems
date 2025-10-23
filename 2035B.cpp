#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1||n==3) cout<<-1<<endl;
        else {
            if(n==2) cout<<66<<endl;
         else if(n==4) cout<<3366<<endl;
            else {
                string s="6366";
                string s2="3366";
                int ll=n-4;
                for(int i=0;i<ll;i++){
                    cout<<3;
                }
               if(n%2) cout<<s<<endl;
               else cout<<s2<<endl;
            }
        }
    }
}