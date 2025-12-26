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
vc(v,n);
itr(i,n){
    cin>>v[i];

}
ll ans=1e9;
srt(v);
ll lo=0,hi=v[n-1];
while(lo<=hi){
    ll mid=(lo+hi)>>1;
    ll nibo=2*mid;
    // difference rakhte parbo
    ll cnt=0;
    ll i=0;
    while(i<n){
        ll mx=v[i]+nibo;
        ll porerind=upper_bound(v.begin(),v.end(),mx)-v.begin();
        cnt++;
        i=porerind;
    }
    if(cnt<=3){
        ans=mid;
        hi=mid-1;
    }
    else lo=mid+1;
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
