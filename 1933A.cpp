#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=abs(v[i]);

        }
        cout<<sum<<endl;
    }
}