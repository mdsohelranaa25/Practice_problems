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

  ll n,m;
  cin>>n>>m;
  vc(v,2*n+5);
  for(int i=1;i<=2*n;i++) cin>>v[i];
  vector<ll>pre(2*n+5,0);
  ll prv=0;
  for(int i=2;i<=2*n;i++){
    if(v[i]>0&&v[i-1]<0) pre[i]+=1;
    pre[i]+=pre[i-1];


  }
  while(m--){
    ll a,b;
    cin>>a>>b;
    cout<<pre[b]-pre[a]+1<<endl;
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
