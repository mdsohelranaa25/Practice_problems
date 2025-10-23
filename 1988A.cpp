#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        n--;
        k--;
        int tot=(n%k)?n/k+1:n/k;
        cout<<tot<<endl;
    }
}