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
vc(v,n+5);
for(int i=1;i<=n;i++) cin>>v[i];
for(int i=2;i<=n;i++) v[i]+=v[i-1];
ll lo=1,hi=n;
ll ans=-1;
while(lo<=hi){
    ll mid=(lo+hi)/2;
    cerr<<mid<<' ';
    if(lo==hi) {ans=lo;
        break;
    }
    cout<<"? "<<(mid-lo+1)<<' ';
    for(int i=lo;i<=mid;i++){
        cout<<i<<' ';
    }
    cout<<endl;
    cout.flush();
    ll x;
    cin>>x;
    if(x==v[mid]-v[lo-1]) lo=mid+1;
    else hi=mid;
    cout.flush();
}
cout<<"! "<<ans<<endl;
cout.flush();

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
