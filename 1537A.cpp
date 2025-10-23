#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        int sum=0;
        cin>>k;
        for(int i=0;i<k;i++){
            int aan;
            cin>>aan;
            sum+=aan;
        }
     if(sum==k) cout<<0<<endl;
     else if(sum>k) cout<<(sum-k)<<endl;
     else cout<<1<<endl;
    }
}