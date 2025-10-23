#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
set<char>c;
for(char ch:s){
    if(isalpha(ch))
    c.insert(ch);
}

cout<<c.size();
}