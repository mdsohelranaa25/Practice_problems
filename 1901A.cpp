#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(auto &it:arr){
            cin>>it;
        }
        int last=(x-arr[n-1])*2;
        int max=0;
        int diff=arr[0]-0;
        max=diff;
        for(int i=0;i<n-1;i++){
            diff=arr[i+1]-arr[i];
            if(diff>max) max=diff;
        }
        if(last>=max) cout<<last<<endl;
        else cout<<max<<endl;
        
    }
}