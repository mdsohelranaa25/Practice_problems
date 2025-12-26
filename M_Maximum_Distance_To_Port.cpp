

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
vector<vector<ll>>adj(1e6);
vector<ll> dist;
vector<int> parent;


void solve()
{

   ll n;cin>>n;
   ll m,k;
   cin>>m>>k;
   vc(v,n);
   itr(i,n) cin>>v[i];
   itr(i,m){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
   }
   
   dist.assign(n+5,INT_MAX);
   dist[1]=0;
   queue<ll>q;
 
   vector<bool>vis(n+5,false);
   q.push(1);
     vis[1]=true;
   while(!q.empty()){

    ll u=q.front();
    q.pop();
    //cerr<<u<<' ';
    for(auto x:adj[u]){
   if(dist[x]==INT_MAX){
    q.push(x);
    dist[x]=dist[u]+1;
   }
    
    }


   }
   vector<ll>freq(n+5,0);
  for(int i=1;i<=n;i++){
    freq[v[i-1]]=max(freq[v[i-1]],dist[i]);
  }
  for(int i=1;i<=k;i++) cout<<freq[i]<<' ';
   cout<<endl;
    
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // sieve();
    // divis();
   // tt
    {
        solve();
    }
}
