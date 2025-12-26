#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define vc(v,n) vector<ll>v(n,0)
#define itr(i,n) for(int i=0;i<n;i++)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using o_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll count_strictly_smaller(o_set<pair<ll,ll>>& ost, ll x) {
    return ost.order_of_key({x, -1});
}
ll count_strictly_greater(o_set<pair<ll,ll>>& ost, ll x) {
    return ost.size() - ost.order_of_key({x+1, -1});
}
int main() {
 o_set<pair<ll,ll>>st;
 o_set<pair<ll,ll>>stt;
 ll  n;
 cin>>n;
 vc(v,n);
 itr(i,n) cin>>v[i];
 vector<ll>pre(n+5,0),suf(n+5,0);
 ll tim=0;
 st.insert({v[0],++tim});
 pre[0]=0;
 for(int i=1;i<n;i++){
    ll now=v[i];
    int boro = count_strictly_greater(st,now);
    pre[i]=boro;
    st.insert({v[i],++tim});
    


 }
 cerr<<endl;
 suf[n-1]=0;
 ll cnt=0;
 stt.insert({v[n-1],++cnt});
 for(int i=n-2;i>=0;i--){
   ll now=v[i];
   ll choto=count_strictly_smaller(stt,now);
   suf[i]=choto;
 stt.insert({v[i],++cnt});
 //cerr<<suf[i]<<' ';
 
 }
 ll ans=0;
 for(int i=1;i<n-1;i++){
   //cerr<<pre[i]<<' '<<suf[i]<<endl;
    ans+=(pre[i]*suf[i]);
 }cout<<ans<<endl;
 
}