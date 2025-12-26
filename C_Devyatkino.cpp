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
bool f2(ll n){
    while(n){
        ll x=n%10;
        if(x==7) return true;
        n/=10;
    }
    return false;
}
ll f1(ll n,ll e){
    for(ll i=0;i<11;i++){
        bool ff=f2(n);
        if(ff==true) return i;
        n+=e;
    }
    return LLONG_MAX;
}
void solve()
{
ll n;
cin>>n;
ll mx=INT_MAX;
ll e=0;
for(int i=1;i<11;i++){
    ll x=f1(n,e);
    mx=min(mx,x);
    e=e*10+9;
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
