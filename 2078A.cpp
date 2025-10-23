#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x;
cin>>n>>x;
int arr[n];
int total=0;
for(auto &it:arr) {cin>>it;
total+=it;
}

if(total/n==x&&total%n==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
