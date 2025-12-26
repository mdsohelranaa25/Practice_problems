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

  ll n,k,m;
  cin>>n>>k>>m;
  if(k==1){
    ll ans=1;
    n--;
    ll ekhon=0;
    ekhon=min(m,n);
    ans+=ekhon;
    n-=ekhon;
    ans+=n/2;
    cout<<ans<<endl;
  }
  else{
    ll ans=0;
    ll mul=n/k;
    ll bad=0;
   ll shuru=0;
   if(mul) {
    ans++;
    shuru++;
    //cerr<<mul<<' '<<bad<<endl;
    mul--;
    //cerr<<mul<<endl;
   }

ll odike=n-(mul/2)*2-shuru;
if(odike>m){
    ans+=m;
    ans+=(mul/2);
}
else{
    ans+=odike;
    m-=odike;
    ll aro=(mul/2)*2;
    ll nei=min(m,aro);
    ans+=nei;
    aro-=nei;
    ans+=aro/2;
}
cout<<ans<<endl;

  }

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
