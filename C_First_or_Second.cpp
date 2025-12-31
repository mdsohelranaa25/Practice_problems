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
  vc(v,n);
  itr(i,n)cin>>v[i];
  ll sum=0,revsum=0,ans=-1e9;
  sum+=v[0];
  ans=max(ans,sum);
  for(int i=1;i<n-1;i++){
    sum+=abs(v[i]);
    ans=max(ans,sum);
    //cerr<<sum<<' '<<ans<<endl;
  }
  for(int i=n-2;i>=0;i--){
    if(i!=0)
    sum-=abs(v[i]);
    else sum-=v[i];
    revsum+=v[i+1];
    ll now=sum-revsum;
    
    ans=max(ans,now);
  }
  cout<<ans<<endl;

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
