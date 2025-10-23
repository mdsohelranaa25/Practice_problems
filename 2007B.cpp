#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        ll ar[m]={0};
        for(auto &it:arr) cin>>it;
        sort(arr,arr+n);
         ll aa=0;
          
            int max=arr[n-1];
        while(m--){
            char c;
            ll a,b;
          
            cin>>c>>a>>b;
           
            if(c=='+'){
                
            if(max>=a&&max<=b) max++;
            ar[aa]=max;
                  
            aa++;
                }
                
            else if(c=='-'){
                 if(max>=a&&max<=b) max--;
            ar[aa]=max;
                  
            aa++;
                }
          
             
        
        
    }
    for(auto &it:ar) cout<<it<<" ";
        cout<<endl;
}
}