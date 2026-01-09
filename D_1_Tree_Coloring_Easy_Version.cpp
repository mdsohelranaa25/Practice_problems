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
vector<bool>vis(N,false);
vector<ll>dis(N,0),dist(N,0);
void dfs(ll u){
    vis[u]=true;
    for(auto x:g[u]){
        if(!vis[x]){
            cerr<<dist[dis[x]]<<' ';
        dist[dis[x]]++;
        cerr<<x<<' '<<u<<' '<<dist[dis[x]]<<' '<<dist[dis[u]]<< ' '<<dis[x]<<' ';
        if(dist[dis[u]]==dist[dis[x]]) dist[dis[x]]++;
        cerr<<dist[dis[x]]<<endl;
        dfs(x);
        }


        
    }
    
}
void solve()
{
    ll n;
    cin >> n;

    for(int i=1;i<=n;i++){
        g[i].clear();
        vis[i]=false;
        dis[i]=1e9;
        dist[i]=0;
    }

    itr(i,n-1){
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    queue<ll> q;
    q.push(1);
    dis[1]=1;
dist[0]=1;
    while(!q.empty()){
        ll u=q.front(); q.pop();
        for(auto x:g[u]){
            if(dis[x]==1e9){
                dis[x]=dis[u]+1;
                q.push(x);
            }
        }
    }
//dfs(1);
    ll mx=0;
    map<ll,ll>mp;
  for(int i=1;i<=n;i++){
    mp[dis[i]]++;
  }
  mx=max(mx,(ll)g[1].size()+1);
  for(int i=0;i<=n;i++) mx=max(mx,mp[i]);
  for(int i=1;i<=n;i++){
    mx=max(mx,(ll)g[i].size());
  }
  

    cout<<mx<<endl;
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
