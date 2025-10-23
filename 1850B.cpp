#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=0,ind=0;
       int arr[n][2];
       for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            
        }
       }
       for(int i=0;i<n;i++){
        if(arr[i][1]>=max&&arr[i][0]<=10) {
            max=arr[i][1];
            ind =i+1;
        }
       }
       cout<<ind<<endl;

        }
    
}