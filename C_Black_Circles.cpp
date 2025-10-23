
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>pr;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        pr.push_back(make_pair(x,y));
    }
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll dis=(((a-c)*(a-c))+((b-d)*(b-d)));
    ll mn=LLONG_MAX;
    bool f=0;
   // cout<<dis<<' ';
 for(int i=0;i<n;i++){
    a=pr[i].first;
    b=pr[i].second;
    ll di=(((a-c)*(a-c))+((b-d)*(b-d)));
    mn=min(mn,di);
  // cout<<mn<<' ';
    if(mn<=dis){
        f=1;
        break;
    }
    
 }
 if(f) cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
}
}