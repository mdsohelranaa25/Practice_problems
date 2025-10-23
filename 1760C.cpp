#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int max=0,p=0;
        vector<int>vv;
        for(int i=0;i<n;i++){
            int mm;
            cin>>mm;
            v.push_back(mm);
            vv.push_back(mm);
            
            if(v[i]>=max) {
                max=v[i];
                p=i;
            }
        }
        sort(vv.rbegin(),vv.rend());
        for(int i=0;i<n;i++){
            if(i==p){
                cout<<(v[i]-vv[1])<<" ";
            }
            else {
                cout<<(v[i]-vv[0])<<" ";
            }
        }cout<<endl;
        
    }
}