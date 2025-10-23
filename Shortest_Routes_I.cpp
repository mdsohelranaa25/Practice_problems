
///

/*
dijkstra


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
#define int ll
vector<vector<pair<int, int>>> adj;
vector<ll> dist;
vector<int> parent;

void dijkstra(int src, int n)
{
    dist.assign(n + 5, INF);
    parent.assign(n + 1, -1);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        auto y = pq.top();
        int d = y.f;
        int u = y.sc;
        pq.pop();
        if (d != dist[u])
            continue;
        for (auto x : adj[u])
        {
            if (dist[u] + x.sc < dist[x.f])
            {
                dist[x.f] = dist[u] + x.sc;
                parent[x.f] = u;
                pq.push({dist[x.f], x.f});
            }
        }
    }
}
void solve()
{

    ll n, m;
    cin >> n >> m;
    adj.assign(n + 5, {});
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        //adj[v].push_back({u, w});
        int src = 1;
    }
    dijkstra(1, n);
    for (int i = 1; i <= n; i++)
    {
            cout << dist[i] << ' ';
    }
   
    
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sieve();
    // divis();
   
        solve();
    
}
