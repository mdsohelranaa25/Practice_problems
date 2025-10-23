#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low=arr[n-1];
int high=arr[0];
int ans;
int l=n-1,h=0;
for(int i=0;i<n;i++){
    if(arr[i]<=low){
        low=arr[i];
        l=i;
    }
    if(arr[i]>high){
        high=arr[i];
        h=i;
    }
}

if(l>h){
    ans=h+(n-1-l);
}
 else ans=h+(n-2-l);


cout<<ans;


}