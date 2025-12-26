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
#define int long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;
ll n,w;
vector<pair<ll,ll>>v;
map<pair<int,int>,ll>dp;
ll mx=0;
int f(int i,int sum)
{
  if(i>n) return 0;
  if(dp.find({i,sum})!=dp.end()) return dp[{i,sum}];
  ll ret=0;
  ret=f(i+1,sum);
  if(v[i].first+sum<=w){
    
    ret=max(ret,v[i].second+f(i+1,sum+v[i].first));


  }
  //cerr<<ret<<' '<<i<< ' '<<sum<<endl;
  mx=max(mx,ret);
return dp[{i,sum}]=ret;

  
}
void solve()
{
  
  cin>>n>>w;
v.assign(n+5,{0,0});
ll sum=0;

for(int i=1;i<=n;i++){
  
  cin>>v[i].first>>v[i].sc;

  
}


ll ans=f(1,0);


cout<<mx<<endl;
  

}
int32_t main()
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
