#include<bits/stdc++.h>
using namespace std;
#define nabila_cdi int
nabila_cdi main(){
    nabila_cdi n;
    cin>>n;
    nabila_cdi m=0,c=0;
    for(nabila_cdi j=0;j<n;j++){
    
            nabila_cdi a,b;
           cin>>a;
           cin>>b;
            if(a>b) m++;
            else if(b>a) c++;
        
    }
   
    if(m>c) cout<<"Mishka";
    else if(m<c) cout<<"Chris";
    else if(m==c) cout<<"Friendship is magic!^^";
}