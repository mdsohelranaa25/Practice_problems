#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int arr[n*2];
        for(int i=0;i<n*2;i++){
            cin>>arr[i];
        }
     int rem=0;
     int count=0;
     bool flag=false;
     if(arr[0]-0>=s ||m-arr[n*2-1]>=s){
        flag=true;count=1;

     }
     else {
        for(int i=2;i<n*2;i+=2){
            rem=arr[i]-arr[i-1];
            if(rem>=s){
                flag=true;
                break;
            }
        }

     }
     if(count==1) cout<<"YES"<<endl;
     else if(flag) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
}