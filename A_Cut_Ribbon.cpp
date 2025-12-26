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
vector<ll>dpp(10000,-1);
ll n,a,b,c;
ll f(ll x){
    if(x==0) return 0;
   
   
    if(dpp[x]!=-1) return dpp[x];
    ll cnt=-19999;
    if(x>=a) cnt=max(cnt,1+f(x-a));
    if(x>=b) cnt=max(cnt,1+f(x-b));
    if(x>=c) cnt=max(cnt,1+f(x-c));
    return dpp[x]=cnt;

}
void solve()
{

  

cin>>n;

cin>>a>>b>>c;
f(n);
vector<ll>dp(n+5,-19999);
dp[0]=0;


for(int i=1;i<=n;i++){
    if(i>=a) dp[i]=max(dp[i],1+dp[i-a]);
    if(i>=b) dp[i]=max(dp[i],1+dp[i-b]);
    if(i>=c) dp[i]=max(dp[i],1+dp[i-c]);

}

cout<<dp[n]<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
