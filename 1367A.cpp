#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    vector<char>v;
    cin>>s;
  
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            char c;
            c=s[i];
            v.push_back(c);
        }
        else if(i==s.length()-1) v.push_back(s[i]);
    }
    for(auto cc:v){
        cout<<cc;
    }cout<<endl;

}
    }
