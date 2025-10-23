#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        if(arr[i]>15){
            for(int j=2;j<10;j++){
                if(arr[i]%j==0) {
                    count++;
                    break;
                } 

            }
            if(count>0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        }
        else {
            for(int j=1;j<=arr[i];j++){
                if(arr[i]%j==0){
                    count++;
                    if(count>3) break;
                }
            }
            if(count==3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}