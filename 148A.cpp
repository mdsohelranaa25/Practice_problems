#include<bits/stdc++.h>
using namespace std;
int main(){
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
vector<int>v(d+1,1);

for(int i=k;i<=d;i+=k)
v[i]=0;

for(int i=l;i<=d;i+=l)
v[i]=0;
for(int i=m;i<=d;i+=m)
v[i]=0;
for(int i=n;i<=d;i+=n)
v[i]=0;
int remove=0;
for(int i=1;i<=d;i++){
if(v[i]==0) remove++;
}

cout<<remove;
}