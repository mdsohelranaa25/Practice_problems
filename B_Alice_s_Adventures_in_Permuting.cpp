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

ll ts=0;
void solve()
{
    ts++;

  ll n,b,c;
  cin>>n>>b>>c;

  if(c<n-2&&b==0)cout<<-1<<endl;
  else if(b==0){
    ll edike=0;
    if(c<n) edike++;
    if(c>=n-2) cout<<n-edike<<endl;
    else cout<<-1<<endl;
  }
  else {
    ll edike=0;
   
    ll baki=n-c;
    if(c<n) edike++;
    baki--;

    if(baki<0) baki=0;
    edike+=baki/b;
    ll odike=n-edike;
  cout<<odike<<endl;
    
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
