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
void sieve()
{
  isprime[1] = false;
  isprime[2] = true;
  pb(primes, 2);
  for (int i = 3; i * i <= N; i += 2)
    isprime[i] = true;
  for (int i = 3; i <= N; i += 2)
  {
    if (isprime[i])
    {
      pb(primes, i);
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = false;
      }
    }
  }
}

void solve()
{

  ll n;
  cin>>n;
  vector<pair<ll,pair<ll,ll>>>pr;
  ll sum=0;
  itr(i,n) {
    ll x,y;
    cin>>x>>y;
    sum+=(x+y);
    pr.push_back({-(x-y),{x,y}});
  }
  srt(pr);
  ll need=sum;
  ll lagto=0;
  ll kheyechi=0;
  itr(i,n){
    if(kheyechi+pr[i].sc.f>lagto) lagto=kheyechi+pr[i].sc.f;
    kheyechi+=pr[i].sc.sc;
  }
  cout<<lagto<<endl;

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 
    solve();
  }
