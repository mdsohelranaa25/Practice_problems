#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        int arr[n];
        int ones=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1) ones++;
        }
        
        sort(arr,arr+n);
        int count=1,max=1;
        if(n==1) {
            cout<<"NO"<<endl;
            
        }
        else {
            int ll=(n-ones)+ones*2 ;
        if(sum>=ll) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
}