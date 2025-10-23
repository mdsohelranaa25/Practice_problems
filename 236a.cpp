#include<bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    
    vector<char>v={c.begin(),c.end()};
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();){
            if(v[i]==v[j]){
                v.erase(v.begin()+j);
            }
            else j++;

        }
    }
    if(v.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}