#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
          for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        int l=n-1;
        int diff=arr[l];
        for(int i=l-1;i>=0;i--){
            if(arr[i]>brr[i+1]) {
                int f=arr[i]-brr[i+1];
                diff+=f;
            }
        }
        cout<<diff<<endl;

    }
}