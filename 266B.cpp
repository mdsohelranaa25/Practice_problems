#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string c;
    cin>>c;
    vector<char>v={c.begin(),c.end()};
    while(t--){
        for(int i=0;i<n-1;){
            if(v[i]=='B'&&v[i+1]=='G'){
                v[i]='G';
                v[i+1]='B';
                i+=2;

            }
            else i++;
        }
    }
    for(auto c:v){
        cout<<c;
    }

}