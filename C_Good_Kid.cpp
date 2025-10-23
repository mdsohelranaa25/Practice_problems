#include<bits/stdc++.h>
using namespace std;
int main(){
 
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
        int m;
    cin>>m;
v.push_back(m);
 
 
}
sort(v.begin(),v.end());
v[0]=(v[0]+1);
int total=1;
for(auto vv:v){
    total*=vv;
}
cout<<total<<endl;
 
}
}
 