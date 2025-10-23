#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int seated=0;
        int d=0,e;
        if(a<=m){
        seated+=a;
        d+=(m-a);
        
        }
        else if(a>m){
            seated+=m;
        }
        if(b>m){
            seated+=m;

        }
        else if(b<=m){
            seated+=b;
            d+=(m-b);
        }
        if(c<=d) seated+=c;
        else seated+=d;
        cout<<seated<<endl;
    }
}