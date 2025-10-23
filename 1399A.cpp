#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        int count=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n-1;i++){
            if(v[i]-v[i+1]>=2) {
              
                count++;
                break;
            }
        }
        if(count>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}