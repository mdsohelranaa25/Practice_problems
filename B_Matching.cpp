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

vector<vector<int>>g(200);
vector<bool>vis(200,false);
vector<int>dp(200,0);
int dfs(int u){
    cerr<<"sz "<<u<<' '<<g[u].size()<<endl;
    if(g[u].size()==0) return 1;
    vis[u]=true;
    int ans=0;
    
    for(auto v:g[u]){
        if(!vis[v]){
            ans+=dfs(v);
        }
    }
    vis[u]=false;
    cerr<<u<<' '<<ans<<endl;
    return ans;
}

void solve()
{
ll n;
cin>>n;
vector<vector<int>>v(n+1,vector<int>(n+1,0));
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
         cin>>v[i][j];
         if(v[i][j]==1){
            g[i].push_back(n+j);
            if(i<n) g[n+j].push_back(i+1);
         }
    }
}
for(int i=1;i<=n;i++) {
    cout<<"i "<<n+i<<' '<<g[n+i].size()<<endl;
    for(auto x:g[n+i]) cout<<x<<' ';
    cout<<endl;
}
cout<<dfs(1)<<endl;


  

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
