#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
   long long count=1;
   if(n>5) cout<<25;
   else {
    for(int i=1;i<=n;i++){
        count*=5;
    }
    
    long long m=count%100;
    cout<<m;
   }


}
