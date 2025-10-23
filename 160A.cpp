#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

vector<int>v;
int s;
int sum=0;
for(int i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
    sum=sum+s;
}int ans=0;
int count=0;
sort(v.begin(),v.end(),greater<>());




for(int i=0;i<n;i++){
  count+=v[i];
  ans++;
if(count>sum/2){
    cout<<ans;
    break;
}
  
    
}



return 0;
}










