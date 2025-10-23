
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
#define pii pair<ll, int>
#define INF 1e18
#define int long long
vector<vector<pair<int, int>>> adj;
vector<vector<ll>> dist;

vector<int> parent;
vector<ll> val, mnval;
void dijkstra(int src, int n){

    ll mn = INF;
parent.assign(n + 1, -1);
dist.assign(n + 5, vector<ll>(1005, INF));
priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> pq;
dist[src][val[src]] = 0;
pq.push({0,{1, val[1]}});
while (!pq.empty())
{
    auto y = pq.top();
    int d = y.f;
    int u = y.sc.f;
    int s = y.sc.sc;

    pq.pop();
    if (d != dist[u][s])
        continue;
    for (auto x : adj[u])
    {
        ll v = x.f;
        ll w = x.sc;
        
        ll ns=min(s,val[v]);
        ll nd=d+w*s;

        if (nd<dist[v][ns])
        {
           dist[v][ns]=nd;
           pq.push({nd,{v,ns}});
        }
      
    }
}
}

void solve()
{

    ll n, m;
    cin >> n >> m;
    val.assign(n + 4, 0);

    adj.assign(n + 5, {});
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        int src = 1;
    }
    for (int i = 1; i <= n; i++)
        cin >> val[i];
    dijkstra(1, n);
   
ll ans=INF;

for(int i=1;i<=1000;i++) ans=min(ans,dist[n][i]);
cout<<ans<<endl;
}
int32_t main()
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
