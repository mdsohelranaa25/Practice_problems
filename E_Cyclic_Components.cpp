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

vector<vector<ll>> v;
vector<bool> vis;
vector<ll> par;
ll ans = 0;
bool f = 0;
bool beshi=0;
void dfs(ll u)

{

    vis[u] = true;
    for (auto x : v[u])
    {
        if(v[u].size()>2) beshi=1;
        //
        // cerr << "x " << x << endl;
        if (!vis[x])
        {
            if (par[x] == -1)
                par[x] = u;
            dfs(x);
        }
        else if (x != par[u])
        {
            f = 1;
        }
    }
}
void solve()
{

    ll n, m;
    cin >> n >> m;
    v.assign(n + 5, {});
    par.assign(n + 5, -1);
    vis.assign(n + 5, false);
    // cerr<<n<<m<<endl;
    itr(i, m)
    {

        ll x, y;
        cin >> x >> y;
        // cerr<<x<<' '<<y<<endl;
        v[x].push_back(y);
        v[y].push_back(x);
        // cerr<<v[x].size()<<' '<<v[y].size()<<endl;
    }
    // cerr<<"h";
    for (int i = 1; i <= n; i++)
        if (!vis[i]){
            f=0;
            beshi=0;
            dfs(i);
            if(f==1&&beshi==0) ans++;
            

        }
        cout<<ans<<endl;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sieve();
    // divis();

    solve();
}
