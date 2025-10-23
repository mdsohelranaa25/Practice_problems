#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<1000){
            if(n/10!=10) cout<<"NO"<<endl;
            else if(n%10<2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else {
             if(n/100!=10) cout<<"NO"<<endl;
             else if(n%100<10) cout<<"NO"<<endl;
             else cout<<"YES"<<endl;

            
        }
    }
}