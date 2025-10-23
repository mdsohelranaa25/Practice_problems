#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        bool fl=true;
        int l=arr[0]%2;
        int m=arr[1]%2;
        for(int i=0;i<n;i+=2){
            if(arr[i]%2!=l){
                flag=false;
                break;
            }
        }
        for(int i=1;i<n;i+=2){
            if(arr[i]%2!=m){
                fl=false;
                break;
            }
        }
        if(flag==true&&fl==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}