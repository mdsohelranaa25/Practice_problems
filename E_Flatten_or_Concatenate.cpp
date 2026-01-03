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
ll ans=0;
ll q(ll x,ll y){
    cout<<"? "<<x<<' '<<y<<endl;
    cout.flush();
    ll m;
    cin>>m;
    cout.flush();
    return m;
}
ll sum=0;

ll fun(ll lo,ll hi){
  // cerr<<sum<<' ';
     sum/=2;
     ll shuru=lo;
     if(sum==1) return hi;
     ll mx=-1;
     while(lo<=hi){
      ll mid=(lo+hi)/2;
    ll  x=q(shuru,mid);
    
      if(x == sum) return mid;
else if(x < sum) lo = mid + 1;
else hi = mid - 1;
    }
      
     return hi;
}
void solve()
{

  ll n;
  cin>>n;
  ans=0;
  ll lo=1,hi=n;
   ll x=q(hi,hi);
   ans=x;
 sum=q(lo,hi);
  while(lo<hi){
    ll ri=fun(lo,hi);
    if((ri-lo+1)<(hi-ri)){
        hi=ri;
        
    }
    else lo=ri+1;
//     x=q(hi,hi);
//    ans=max(ans,x);
    
  }
  x=q(hi,hi);
  ans=max(ans,x);
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