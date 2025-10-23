#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s;
    int i=0,j=0;
    vector<char>v(s.begin(),s.end());
    for(char c:s){
        if(c>='A'&&c<='Z'){
            i++;
        }
        else if( c>='a'&&c<='z'){
            j++;
        }
    }
   if(i>j){
    for(char &chh:v){
        chh=toupper(chh);
        cout<<chh;
    }}
    else
     for(char &ch:v){
        ch=tolower(ch);
        cout<<ch;
    }
   }
