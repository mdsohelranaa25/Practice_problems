#include<bits/stdc++.h>
using namespace std;
int fibo(int n){

if(n<=1) return n;
int first=fibo(n-1);
int sec=fibo(n-2);
return first+sec;



}

int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
}



}