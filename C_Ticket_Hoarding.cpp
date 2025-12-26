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

  ll n,m,k;cin>>n>>m>>k;
  vc(v,n+5);
  itr(i,n) cin>>v[i];
  ll lagbe=k;
  vector<pair<ll,ll>>pr;
  map<ll,ll>mp;
  itr(i,n){
    pr.push_back({v[i],i});
  }
  srt(pr);
  for(auto x:pr){
    if(lagbe<=0) break;
    ll idx=x.sc;
    ll val=x.f;
    ll ekhane=min(m,lagbe);
    mp[idx]=ekhane;
    lagbe-=ekhane;

  }
  ll ans=0;
  ll niyechi=0;
  itr(i,n){
    ll ekhane=mp[i];
    ll val=v[i]+niyechi;
    ans+=val*ekhane;
    niyechi+=ekhane;
    
  }
  cout<<ans<<endl;

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
