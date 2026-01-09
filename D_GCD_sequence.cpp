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

 bool isgood(vector<ll>&b){
  ll n=b.size();
  ll g=__gcd(b[0],b[1]);
  for(int i=1;i<n-1;i++){
    ll curg=__gcd(b[i],b[i+1]);
    if(g>curg) return false;
    else g=curg;
  }
  return true;

 }
void solve()
{

  ll n;
  cin>>n;
  vc(v,n);
  itr(i,n) cin>>v[i];
  ll todel=-1;
  ll g=-1;
  itr(i,n-1){
    ll curg=__gcd(v[i],v[i+1]);
    if(curg<g){
      todel=i;
      break;
    }
    else g=curg;

  }
  if(todel==-1) {
    yes;
    return;
  }
  vector<ll>a=v,b=v,c=v;
  if(todel>0) a.erase(a.begin()+todel-1);
  b.erase(b.begin()+todel);
  if(todel<n-1) c.erase(c.begin()+todel+1);
  if(isgood(a)||isgood(b)||isgood(c)) yes;
  else no;


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
