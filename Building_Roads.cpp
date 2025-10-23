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
vector<vector<ll>>g;
vector<bool>vis;
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]) if(!vis[x]) dfs(x);
}
void solve()
{
ll n,m;
cin>>n>>m;
g.assign(n + 1, {});
    vis.assign(n + 1, false);
itr(i,m){
    ll x,y;
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
}
ll anss=0;
vector<ll>ans;
//dfs(1);

for(int i=1;i<=n;i++){
    if(!vis[i]) {
        ans.push_back(i);
        anss++;
        dfs(i);
    }
}

cout<<ans.size()-1<<endl;
for(int i=1;i<ans.size();i++) cout<<ans[i-1]<<' '<<ans[i]<<endl;

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  
  
    solve();
  
}
