#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k==1){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            } cout<<endl;

        }
        else if(k==2){
            cout<<n-1<<" ";
            for(int i=1;i<=n-2;i++){
                cout<<i<<" ";
            }
            cout<<n<<endl;
        }
        else if(k>2){
            long long d=n/k;
            int j=d+1;
            int m=1;
            for(int i=1;i<=n;i++){
                if(i%k==0){
                    cout<<m<<" ";
                    m++;

                }
                else {
                    cout<<j<<" ";
                    j++;
                } 
            }cout<<endl;
        }
    }
}