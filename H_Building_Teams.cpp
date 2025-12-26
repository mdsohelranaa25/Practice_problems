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
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;

vector<vector<ll>>g(N);
vector<bool>vis(1e5+5,false);
 vector<ll>colr(N+5);
 vector<ll>par(1e6);
 bool f=0;
void dfs(ll u){
vis[u]=true;

for(auto x:g[u]){
  //  cerr<<u<<' '<<x<<' '<<vis[x]<<endl;
  if(vis[x]==1){
    //cerr<<par[u]<<' '<<par[x]<<' '<<u<<' '<<x<<endl;
  }
    if(!vis[x]){
        par[x]=u;
        ll col=colr[u]^1;
        colr[x]=col;
        dfs(x);
    }
    else if(par[u]!=x){
       // cerr<<par[u]<<' '<<par[x]<<endl;
        if(colr[x]==colr[u]) f=1;
    }
}
}
void solve()
{

  ll n,m;
  cin>>n>>m;
  while(m--){
    ll a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
 
  for(int i=1;i<=n;i++){
    if(!vis[i]){
        colr[i]=0;
        dfs(i);
    }
  
  }
  if(f) {
    cout<<"IMPOSSIBLE"<<endl;
    return;
  }
  for(int i=1;i<=n;i++){
    cout<<colr[i]+1<<' ';

  }

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
