
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
const int N = 1e7 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;
#define pii pair<ll, int>
#define INF 1e18
#define int ll
vector<vector<pair<int, int>>> adj;
vector<ll> dist;
vector<int> parent;
vector<ll> v(10, 0);
void sieve() {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= N; j += i)
                isprime[j] = false;
        }
    }
    for (int i = 2; i <= N; i++) {
        if (isprime[i]) primes.push_back(i);
    }
}

void dijkstra(int src, int n)
{
    dist.assign(10, INF);
    parent.assign(10, -1);
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
    ll a=n,b=m;
    if(n==m) {
        cout<<0<<endl;
        return;
    }
    ll spf_n = n;
    ll spf_m = m;
    for (auto x : primes)
    {
        if(x*x>n) break;
        if (n % x == 0)
        {
            spf_n = x;
            break;
        }
    }
    for (auto x : primes)
    {
        if(x*x>m) break;
        if (m % x == 0)
        {
            spf_m = x;
            break;
        }
    }
    v.assign(10, 0);
    v[1] = a;
    v[5] = b;
    v[2] = 2;
    v[3] = spf_n;
    v[4] = spf_m;
    adj.assign(10, {});
    for (int i = 1; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            ll p = v[i];
            ll q = v[j];
            ll g = __gcd(p, q);
            ll w = 0;
            if (g > 1)
            {
                if (g == min(p, q))
                    w = max(p, q);
                else
                    w = p + q;
            }
            else
                w = p * q;
                ll aa=0;
                if(p%2==0) aa=2;
                else aa=2*p;
                ll ab=0;
                if(q%2==0) ab=q;
                else ab=2*q;
                w=min(w,aa+ab);
            adj[i].push_back({j, w});
            adj[j].push_back({i,w});
        }
    }
    dijkstra(1, 5);

    cout << dist[5] << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    // divis();
    tt
    {
        solve();
    }
}
