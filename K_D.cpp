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
const int N = 1e7 + 1;
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
ll a,b;
cin>>a>>b;
ll g=__gcd(a,b);
ll ans=LLONG_MAX;
if(g==a) ans=b;
 else if(g>1) ans=a+b;

    ll x=-1;
    for(auto p:primes){
        if(p>b) break;
        ll c=a*p;
        if(a%p==0) c=a;
        ll d=b*p;
        if(b%p==0) d=b;
        ans=min(ans,c+d);
       // cerr<<p<<' ';
        if(p>b) break;
        if(b%p==0){
            x=p;
            break;
        }

    }
   
    cout<<ans<<endl;
    
   

  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  sieve();
  // divis();
  tt
  {
    solve();
  }
}
