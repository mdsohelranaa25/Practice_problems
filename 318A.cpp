#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
long long d;


long long odd;
long long even;
if(n%2!=0){
    d=n/2+1;
}
else 
    d=n/2;


if(k<=d){
   odd=(2*k)-1;
    
cout<<odd;

}
else {
k=k-d;

  
       even=2*k;
    
    cout<<even;
}



}