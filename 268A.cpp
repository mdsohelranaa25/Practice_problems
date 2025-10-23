#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n=t*2;
    int count=0;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i=i+2){
        for(int m=2;m<=n;m=m+2){
        if(m==i+1) continue;
        else {
            if(arr[i]==arr[m]){
                count++;
            }
        }
    }
}
cout<<count;
}