#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
         if(c>d){
            int temp=c;
            c=d;
            d=temp;
        }
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(((c>a&&c<b)&&(d<a||d>b))||((c<a||c>b)&&(d>a&&d<b))) cout<<"YES\n";
        else cout<<"NO\n";
        }
    
}