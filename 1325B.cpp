#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            s.insert(m);
        }
        cout<<s.size()<<endl;
    }
}