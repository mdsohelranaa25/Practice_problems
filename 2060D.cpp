#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mm=0;
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            int m=min(arr[i],arr[i-1]);
            arr[i-1]-=m;
            arr[i]-=m;


        }
        bool flag=true;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                flag=false;
                cout<<"NO"<<endl;
                break;
            }

        }
        if(flag) cout<<"YES"<<endl;
    }
}