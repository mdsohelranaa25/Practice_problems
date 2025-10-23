#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    string ss;
    cin>>ss;
    vector<char>s={ss.begin(),ss.end()};
    
    int j=0;
    for(int i=s.size()-1;i>=0;i--){
        if(j==d) break;
        else{
        if(s[i]=='@'){
            s[i]='.';
            j++;
        }
        }
    }
    for(auto it:s){
        cout<<it;
    }
    
}