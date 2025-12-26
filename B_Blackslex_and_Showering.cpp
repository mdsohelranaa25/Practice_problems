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
  itr(i,n)cin>>v[i];
  ll now=0;
  for(int i=0;i<n-1;i++){
    now+=abs(v[i]-v[i+1]);
  }
  //cerr<<now<<endl;
  ll mx=abs(v[1]-v[0]);
  mx=max(mx,abs(v[n-1]-v[n-2]));
  for(int i=1;i<n-1;i++){
    ll bad=abs(v[i]-v[i-1])+abs(v[i]-v[i+1]);
    ll add=abs(v[i+1]-v[i-1]);
    bad-=add;
    //cerr<<i<<' '<<bad<<endl;
    mx=max(mx,bad);
  }
  cout<<now-mx<<endl;

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
