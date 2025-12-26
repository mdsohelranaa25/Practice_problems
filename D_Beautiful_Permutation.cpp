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
  ll totsum=n*(n+1);
  totsum/=2;
  cout<<2<<' '<<1<<' '<<n<<endl;
   cout.flush();
  ll x;
  cin>>x;
   cout.flush();
 ll up=-1;
  ll range=x-totsum;
  ll lo=1,hi=n;
  while(lo<=hi){
    ll mid=(lo+hi)/2;
    cout<<1<<' '<<1<<' '<<mid<<endl;
    cout.flush();
    ll x;
    cin>>x;
     cout.flush();
    cout<<2<<' '<<1<<' '<<mid<<endl;
     cout.flush();
    ll y;
   
    cin>>y;
     cout.flush();
    if(y-x==range){
        up=mid;
        hi=mid-1;

    }
    else {
        lo=mid+1;
    }

  }
  cout<<"!"<<' '<<up-range+1<<' '<<up<<endl;
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
