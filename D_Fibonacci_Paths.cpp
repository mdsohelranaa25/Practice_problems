/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
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
#define MOD 998244353
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;
vector<vector<ll>>g(1e6);
vector<bool>vis(1e6,false);
vector<vector<ll>>par(1e6);
vector<ll>sv(1e6,0);

void dfs(ll u){
    //cerr<<u<<endl;
    vis[u]=true;
    for(auto x:g[u]){
        par[x].push_back(u);
        if(!vis[x]){
            dfs(x);
        }
        
    }

}
void solve()
{

  
ll n,m;
cin>>n>>m;

itr(i,n+5){
    g[i].clear();
    vis[i]=false;
    par[i].clear();
    sv[i]=0;
  
}
vc(v,n+5);
itr(i,n) cin>>v[i+1];
itr(i,m){
    ll a,b;
    cin>>a>>b;
  
    g[a].push_back(b);
    

}
ll ans=0;
vector<ll>svv(1e6,0);
for(int i=1;i<=n;i++)
{
    for(auto x:g[i]) svv[x]++;
}

for(int i=1;i<=n;i++){
    if(!vis[i]){
      
        dfs(i);
        
    }
}



for(int i=1;i<=n;i++){
    ll now=0;
    ll val=v[i];
    for(auto x:par[i]){
        ll cur=v[x];
        
        for(auto y:par[x]){
            if(cur+v[y]==val){
                now+=sv[y]+1;
                now%=MOD;
            }
        }
    }
   // cerr<<i<<' '<<now<<endl;
    sv[i]=now;
    
}
ans=0;
for(int i=1;i<=n;i++){
    ans+=sv[i];
    ans%=MOD;
    ans+=svv[i];
    ans%=MOD;
}
cout<<ans%MOD<<endl;

for(int i=1;i<=n;i++){
    cerr<<sv[i]<<' '<<svv[i]<<endl;

}
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
