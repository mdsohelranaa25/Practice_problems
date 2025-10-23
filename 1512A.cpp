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
        for(int i=0;i<n;i++){
            int m=arr[0];
            if(i==0){
            if(m!=arr[i+1]&&m==arr[i+2]){
                cout<<i+2<<endl;
                break;
            }
            else if(m!=arr[i+1]&&m!=arr[i+2]){
                cout<<i+1<<endl;
                break;
            }
            }
            else {
                if(m!=arr[i]) {cout<<i+1<<endl;
                break;
                }
            }
        }
    }
}