#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long arr[4];
     long long count=0;
     
    for(long long i=0;i<4;i++){
        cin>>arr[i];
        long long m=arr[0];
        if(arr[i]>m)count++;
    }
   cout<<count<<endl;
}
}