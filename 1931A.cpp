#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=28) {
            cout<<"aa"<<char(n-2+96)<<endl;
        }
        else if(n<=53){
            cout<<"a"<<char(n+96-27)<<"z"<<endl;
        }
        else cout<<char(n+96-52)<<"zz"<<endl;
    }
}