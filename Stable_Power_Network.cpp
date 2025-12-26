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
#define int long long

#define pii pair<ll, int>
#define INF 1e18
const int N = 1e6 + 1;
const int MAXN=1e6;
ll n,m;
vector<vector<pair<int, pair<int, int>>>> g(MAXN); 

long long dijkstra(int mid) {
    vector<long long> dist(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto now = pq.top(); pq.pop();
        long long curTime = now.first;
        int u = now.second;
        
        if (curTime > dist[u]) continue;

        for (auto &edge : g[u]) {
            int v = edge.first;
            int w = edge.second.first;
            int t = edge.second.second;
            //cerr<<u<<' '<<v<<' '<<dist[u]<<' '<<w<<' '<<t<<endl;

            if (w > mid) continue; 

            long long newTime = curTime + t;
            if (newTime < dist[v]) {
                dist[v] = newTime;
                pq.push({newTime, v});
            }
        }
    }

    return dist[n]; 
}

void solve(){
    cin >> n >> m;
for(int i=1;i<=n;i++){
    g[i].clear();
}
    for (int i = 0; i < m; i++) {
        int u, v, w, t;
        cin >> u >> v >> t>>w;

        g[u].push_back({v, {w, t}});
        g[v].push_back({u, {w, t}}); 
    }

    int low = 0, high = 1e10;
    long long mntime = -1;
    int mnwt = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long time = dijkstra(mid);
//cerr<<time<<' '<<mid<<endl;
        if (time != INF) {
            mnwt = mid;
            mntime = time;
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
        
    }

    cout << mnwt << " " << mntime << endl;
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
