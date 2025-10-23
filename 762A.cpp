#include <bits/stdc++.h>
using namespace std;
 
#define tt int t; cin >> t; while (t--)
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
  ll n,k;
cin>>n>>k;
if(n%2!=0){
for(int i=1;i<=n;i+=2){
 
 if(n%i==0) k--;
if(k==0) {
cout<<i<<endl;
return 0;
}
}
}
else {
   ll lg=1+(k-1)*2;
   if(lg<=n)n=lg;
   else {
    cout<<-1<<endl;
    return 0;
   }

for(int i=3;i<n;i+=2){
 
 if(n%i==0) n-=2;

}
cout<<n-1<<endl;
return 0;
 
 
}cout<<-1<<endl;
}