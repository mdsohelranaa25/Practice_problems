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
ll n,m,k;cin>>n>>m>>k;
ll x=(m-2)/3;
ll left=k-1;
ll right=n-k;
left=min(left,x+1);
 right=min(right,x+1);
if(left<x+1&&right<x+1) {
    cout<<n<<endl;
    return;
}
if(left<(x+1)||right<(x+1)){
    ll xx=(m-1-min(left,right))/2;
   // cout<<xx+2+min(left,right)<<endl;
  //  cout<<(min(left,right)+xx+2)<<endl;
    ll ans=min(left,right)+xx+2;
    if((2*xx+1)>m) ans-=(2*xx+1)-m;
    //if(m-(2*x+1+min(left,right))>1) ans++;
    cout<<min(ans,n)<<endl;

    return;
}

ll ans=2*x+3;
if(m-(3*x+2)>1) ans++;
//cerr<<ans<<' '<<(3*x+2)<<' '<<m<<endl;
if((3*x+2)>m) ans-=((3*x+2)-m);


cout<<min(n,ans)<<endl;

  

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
