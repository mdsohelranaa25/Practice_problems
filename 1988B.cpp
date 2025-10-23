#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int>v;
        v.push_back(s[0]-'0');
        for(int i=1;i<n;i++){
            if(s[i]=='1') v.push_back(s[i]-'0');
           else  if(s[i]=='0'&&s[i-1]!='0') v.push_back(s[i]-'0');
              
        }
        int zero=0,ones=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0) zero++;
            else ones++;
        }
        // for(auto &it:v) cout<<it;
        // cout<<endl;
        if(ones>zero) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}