#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[5]={100,20,10,5,1};
int n;
cin>>n;
int m;
int count=0;
for(int i=0;i<5;i++){
    if(n>=arr[i]){
        m=n/arr[i];
        count=count+m;
        n=n%arr[i];
    }
}

cout<<count;
}