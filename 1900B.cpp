#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
       int a,b,c;
       cin>>a>>b>>c;
int cn=1;
        // if(a==b&&b==c) {cout<<"1 1 1"<<endl; c=0; }
        // else if(a==b) { cout<<"0 0 1"<<endl; c=0; }
        // else if(a==c) {cout<<"0 1 0"<<endl; c=0; }
        // else if(b==c) {cout<<"1 0 0"<<endl; c=0;}
        // else {
int d1,d2,d3;
d1=abs(a-b);
d2=abs(b-c);
d3=abs(c-a);

int p=0,q=0,r=0;
    if(d1%2==0) { r=1;
    
}
if(d2%2==0) { p=1;}

if(d3%2==0){ q=1;}

if(c) cout<<p<<" "<<q<<" "<<r<<endl;
    }
    }
