/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first

#define sc second
#define endl '\n'

#define inf INT_MAX
const ll N = 3000 +9;
vector<bool> isprime(N, false);
vector<ll> primes;
ll ts;
vector<vector<ll>>g(N);
vector<bool>vis(N,false);
vector<pair<ll,ll>>pr(N);
vector<ll>dp(N,0);
pair<ll,ll>dfs(ll u){
    vis[u]=true;

    ll pp=pr[u].f;
    ll val=pr[u].sc;
    //cerr<<pp<<' '<<val<<' '<<u<<endl;
    for(auto x:g[u]){
        if(!vis[x]) {
            auto ret=dfs(x);
            pp+=ret.f;
            val+=ret.sc;
           
            
        }
    }
    //cerr<<"u "<<u<<' '<<pp<<' '<<val<<endl;
    dp[pp]=max(dp[pp],val);
   // cerr<<"f U"<<u<<' '<<pp<<' '<<dp[pp]<<endl;
    return {pp,val};


}

void solve()
{
    ts++;
ll n,m,r,q;
cin>>n>>m>>r>>q;

itr(i,n){
    ll a,b;
    cin>>a>>b;
    pr[i+1]={a,b};

}
itr(i,m){
    ll a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
  auto ans=dfs(r);

  vector<ll>best(N,0);
  best[0]=0;
  for(ll i=1;i<=3005;i++){
    
    best[i]=best[i-1];
    if(dp[i]!=inf) best[i]=max(best[i],dp[i]);
    //cerr<<dp[i]<<' '<<best[i]<<endl;
  //  cerr<<i<<' '<<best[i]<<endl;
    
  }
//   for(int i=1;i<=50;i++){

//     ll now=0;

//     for(int j=1;j<=i/2;j++){
//         ll ekhn=best[j]+best[i-j];
//         now=max(now,ekhn);

//     }
    
//     best[i]=max(best[i],now);
//     cerr<<i<<' '<<best[i]<<' '<<now<<endl;
//   }
  while(q--){
    ll tk;
    cin>>tk;
    cout<<best[tk]<<endl;
  }


}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    cout<<"Case "<<ts<<":"<<endl;
    solve();
  }
}
