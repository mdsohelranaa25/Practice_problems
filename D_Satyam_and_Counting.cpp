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

  
ll n;
cin>>n;
map<pair<ll,ll>,ll>mp;
vector<pair<ll,ll>>pr;
itr(i,n){
    ll a,b;cin>>a>>b;pr.push_back({a,b});
    mp[{a,b}]++;
}
srt(pr);
ll ans=0;
for(int i=1;i<n;i++){
    if(pr[i-1].f==pr[i].f){
        ans+=n-i-1;
        ans+=(i-1);
    }
    ll a=pr[i].f;
    ll b=pr[i].sc;
    b^=1;
    if(mp[{a+1,b}]>0&&mp[{a-1,b}]) ans++;

    
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
