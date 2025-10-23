#include<bits/stdc++.h>
using namespace std;
#define in long long
int main(){
    int t;
    cin>>t;
    while(t--){
        in n,x,y;
        in sum=0;
        cin>>n>>x>>y;
        in arr[n];
        for(in i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        } in count=0,mm;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                 mm=arr[i]+arr[j];
                if(sum-mm>=x&&sum-mm<=y) count++;
                else if(sum-mm>y){
                    i++;
                    j=i+1;
                }
                            
            }
        }
        cout<<count<<endl;
 
    }
}