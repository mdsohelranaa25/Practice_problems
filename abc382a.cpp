#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    string s;
    cin>>n>>d;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.') count++;


    }
    count+=d;
    cout<<count;
}