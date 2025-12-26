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
#define ll int
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
  
  vc(v,n+1);
  for(int i=1;i<=n;i++) cin>>v[i];
    vector<vector<ll>>mp(n+5);
    for(int i=1;i<=n;i++){
        mp[v[i]].push_back(i);
    }
    vc(dp,n+5);
    dp[0]=0;
    
    for(int i=1;i<=n;i++){
        dp[i]=max(dp[i],dp[i-1]);

        ll ind=upper_bound(mp[v[i]].begin(),mp[v[i]].end(),i)-mp[v[i]].begin();
      ll j=ind;
      if(j>=mp[v[i]].size()) continue;
       // cerr<<j<<' '<<dp[j]<< ' '<<i<<' ';
        dp[mp[v[i]][j]]=max(dp[mp[v[i]][j]],max(dp[i]+mp[v[i]][j]-i,dp[i-1]+mp[v[i]][j]-i+1));
        //cerr<<dp[j]<<endl;

       
        

    }
   // for(int i=1;i<=n;i++) cout<<dp[i]<<' ';

   cout<<dp[n]<<endl;


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
