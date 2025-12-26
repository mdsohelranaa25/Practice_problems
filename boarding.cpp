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


void solve()
{
set<ll>st;
ll n,m,p,x;
cin>>n>>m>>p>>x;
vector<vector<ll>>v(n+1,vector<ll>(m+1,0));
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>v[i][j];
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        ll now=v[i][j];
        if(i>1&&v[i-1][j]!=0)g[now].push_back(v[i-1][j]);
        if(i<n&&v[i+1][j]!=0) g[now].push_back(v[i+1][j]);
        if(j>1&&v[i][j-1]!=0)g[now].push_back(v[i][j-1]);
        if(j<m&&v[i][j+1]!=0) g[now].push_back(v[i][j+1]);
        
    }
}
ll ct=0;
for(int i=x-1;i>=1;i--){
    ct++;
    for(auto u:g[i]){
        if(u!=i-1&&u!=i+1&&u+ct<=p) st.insert(u+ct);
    }
}
for(auto u:g[x]) st.insert(u);
cout<<st.size()<<"/"<<p-1<<endl;

  

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
