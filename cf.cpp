#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int n;
        if(a>b) n=a;
        else n=b;
        while(n){
            if(n%a==n%b){
                cout<<n<<endl;
                
               n=0;
            }
            else {
                n++;
            }
        }
    }
}