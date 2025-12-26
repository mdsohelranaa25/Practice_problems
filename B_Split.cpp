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
   ll n;
   cin>>n;
   n*=2;
   ll o=0,e=0;
   set<ll>st;
   map<ll,ll>mp;
   itr(i,n){
    ll a;
    cin>>a;
    mp[a]++;
    st.insert(a);

   }
for(auto x:st) if(mp[x]%2) o++;
else e++;
ll ans=0;
if(o>=1||e%2==(n/2)%2) cout<<o+2*e<<endl;
else cout<<2*(e-1)<<endl;

  

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
