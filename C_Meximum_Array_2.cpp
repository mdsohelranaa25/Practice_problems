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


void solve()
{

  ll n,k,q;
  cin>>n>>k>>q;
  vc(v,n+1);
  map<ll,set<ll>>mp;
  while(q--){
    ll a,b,c;
    cin>>a>>b>>c;
    for(int i=b;i<=c;i++) mp[i].insert(a);

  }
  for(int i=1;i<=n;i++){
    if(mp[i].size()==2) v[i]=k+1;
    else {
        ll xx=-1;
        for(auto x:mp[i]) xx=x;
        if(xx==1) v[i]=k;
        else v[i]=k+2;
    }
  }
ll nc=0;
  for(int i=1;i<=n;i++){
    if(v[i]!=k+2) nc=0;
    else{
        v[i]=nc;
        nc++;
        if(nc>=k) nc=0;
    }
  }
  for(int i=1;i<=n;i++)cout<<v[i]<<' ';
  cout<<endl;


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
