#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        int sum=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=k){
                sum=sum+arr[i];
            }
            else if(arr[i]==0&&sum>0){
            count++;
            sum--;
            }
        
        }
      cout<<count<<endl;
    }
}