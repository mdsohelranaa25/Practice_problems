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
vc(vv,n);
itr(i,n) cin>>v[i];
itr(i,n) cin>>vv[i];
vector<vector<ll>>dp(n+1,vector<ll>(2,0));
ll a=-v[0];
ll b=vv[0];
dp[0][0]=max(a,b);
dp[0][1]=min(a,b);
   //cerr<<dp[0][0]<<' '<<dp[0][1]<<endl;
for(int i=1;i<n;i++){
    ll now=v[i];
    ll noww=vv[i];
    ll mn=1e9;
    ll mx=-1e9;
    ll a=0;
    mx=max(mx,dp[i-1][0]-now);
    mn=min(mn,dp[i-1][0]-now);
    mx=max(mx,dp[i-1][1]-now);
    mn=min(mn,dp[i-1][1]-now);
     mx=max(mx,noww-dp[i-1][0]);
    mn=min(mn,noww-dp[i-1][0]);
    mx=max(mx,noww-dp[i-1][1]);
    mn=min(mn,noww-dp[i-1][1]);
    dp[i][0]=mx;
    dp[i][1]=mn;
    
    //cerr<<dp[i][0]<<' '<<dp[i][1]<<endl;


}
cout<<dp[n-1][0]<<endl;
  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}
