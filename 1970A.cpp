#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //unordered_map<char,int>map;
       // map[s[0]]=s[1]-'0';
       for(int i=1;i<=8;i++){
        if(i==(s[1]-'0')) continue;
        else cout<<s[0]<<i<<endl;
       }
       for(char i='a';i<='h';i++){
        if(i==s[0]) continue;
        else cout<<i<<s[1]<<endl;

       }
    
    }
}