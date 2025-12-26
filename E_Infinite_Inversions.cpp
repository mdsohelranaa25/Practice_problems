#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vc(v,n) vector<ll>v(n+1)
#define itr(i,n) for(int i=1;i<=n;i++)
#define  endd cout<<'\n'
#define srt(v) sort(v.begin(),v.end())
#define int ll

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R> using o_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    ll n;
    cin >> n;

    o_set<int> st,stt;
    unordered_map<ll,ll> mp;
    vector<ll> chang;
    set<ll> cng;

    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;

     
        cng.insert(a);
        cng.insert(b);

        if (!mp.count(a)) mp[a] = a;
        if (!mp.count(b)) mp[b] = b;
        //cerr<<mp[a]<<' '<<mp[b]<<' '<<a<<' '<<b<<endl;

        swap(mp[a],mp[b]);
      //  cerr<<mp[a]<<' '<<mp[b]<<' '<<a<<' '<<b<<endl;
    }
  
    vector<pair<ll,ll>> pr;

    for(auto x : cng) chang.push_back(x);
    for(auto x : chang){
        pr.push_back({x, mp[x]});
       // cerr<<x<<' '<<mp[x]<<endl;
    }

    srt(chang);
   //for(auto x:chang) cerr<<x<<' ';
   // cerr<<endl;
    srt(pr);
   // for(auto x:pr) cerr<<x.first<<' '<<x.second<<endl;

    if(pr.empty()){   
     // cerr<<"Hg";
        cout << 0 << "\n";
        return 0;
    }
    
  

    n = pr.size() - 1;
    ll ans = 0;
    vector<ll>pre(n+5,0);
  unordered_map<ll,ll>id;
    ll idd=1;


    for(auto x:chang) {id[x]=idd++;
    //  cerr<<id[x]<<' '<<x<<endl;
    }
    for(int i=1;i<idd;i++){
      pre[i]=1+pre[i-1];
      
    }
    for(int i = n; i >= 0; i--){
 
        ll ind = pr[i].first;
        ll val = pr[i].second;
        
       // cerr<<"id "<<ind<<' '<<val<<endl;

 st.insert(val);
   if(st.size() > 0){
         // cerr<<"sz "<<st.size()<<endl;
        // cerr<<i<<' '<< st.order_of_key(pr[i].second)<<endl;
         ans+= st.order_of_key(pr[i].second);
        // cerr<<"ans "<<ans<<' '<<i<<' '<<endl;
   }
  // cerr<<val<<' '<<ind<<endl;
        if(ind>val){
          ll boro=ind-val;
       ll bad=pre[id[ind]]-pre[id[val]];
      /// cerr<<bad<<endl;
       ans+=max(0LL,(boro-bad));
        //  cerr<<"ch "<<chotoache<<' ';
         
         
        }
        
      
           // cerr<<i<<' '<<choto<<' '<<boro<<' '<<dif<<' '<<ans<<endl;
        
        if(val > ind){
            ll dif = val - ind;
          
           // cerr<<"ind "<<i<<' '<<ind<<' '<<val<<endl;
        ll bad=pre[id[val]]-pre[id[ind]];
          ans+=max(0LL,(dif-bad));
            
        }
       // cerr<<"i "<<i<<' '<<ans<<endl;
        
    }

    cout << ans << endl;
}
