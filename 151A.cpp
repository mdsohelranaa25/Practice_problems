#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np,a,b,ab;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     a=k*l/nl;
    b=c*d;
    c=p/np;
int aa=min(a,b);
int ans=min(aa,c)/n;

    cout<<ans;
}