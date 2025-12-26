
////euler tour

/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt    \
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
ll n;
vector<ll> val;
vector<vector<ll>> g(1e6);

vector<ll> in(1e6, 0), out(1e6, 0);
ll d=1,c=0;
vector<ll>vis(1e6,0);
void dfs(int u){
vis[u]=true;
for(auto x:g[u]){
    if(!vis[x]){
        in[x]=++d;
        dfs(x);
    }
}
out[u]=d;

}
void solve()
{

    cin >> n;
    ll k;
    cin>>k;
    val.push_back(0);
    itr(i, n)
    {
        ll x;
        cin >> x;
        val.push_back(x);
    }
    itr(i, n - 1)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    in[1]=1;
    dfs(1);
    vector<ll>v(n+5);
    for(int i=1;i<=n;i++){
        v[in[i]]=i;
    }
    //for(int i=1;i<=n;i++) cerr<<v[i]<<' '<<out[v[i]]<<endl;
    // cerr<<endl;
    val.push_back(0);
    set<ll>st;
    vector<ll>pre(n+5,0);
    for(int i=n;i>=1;i--){
        ll now=v[i];
        pre[i]=st.size();
    }
    vector<ll>final(n+5);
    for(int i=1;i<=n;i++){
        ll man=v[i];
        ll ses=out[man]+1;
        final[v[i]]=pre[i]-pre[ses];

    }
    for(int i=1;i<=n;i++) cout<<final[i]<<' ';
    endd;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sieve();
    // divis();

    solve();
}
