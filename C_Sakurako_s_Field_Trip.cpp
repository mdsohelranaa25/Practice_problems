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
#define rsrt(v) sorgt(v.rbegin(), v.rend())
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
    itr(i,n)cin>>v[i+1];
    for(int i=n/2-1;i>=1;i--) if((v[i]==v[i+1])||(v[n-i+1]==v[n-i])) swap(v[i],v[n-i+1]);
    ll ans=0;
    for(int i=1;i<n;i++) if(v[i]==v[i+1]) ans++;
    cout<<ans<<endl;
    itr(i,n+1) cout<<v[i]<<' ';
    // ll i=0,j=n-1;
    // vector<vector<ll>>dp(n+1,vector<ll>(2,1e9));
    // ll org=0;
    // if(n==1){
    //     cout<<0<<endl;
    //     return;
    // }
    // ll cng=0;
    // dp[0][0]=0,dp[0][1]=0;
    // if(i<j) {
    //     if(v[i]==v[i+1]) org++;
    //     dp[0][0]=org;
    //     if(v[j]==v[i+1]) cng++;
    //     dp[0][1]=cng;
    // }
    //  ll ans=min(dp[i][0],dp[i][1]);
    // i++;
    // j--;
    // //cerr<<dp[0][0]<<' '<<dp[0][1]<<endl;
  
    // while(i<j){
    //   //cerr<<i<<' '<<j<<' ';
    //     org=0,cng=0;
    //     //current ta thik thakbe
    //     if(v[i]==v[i+1]) org++;
    //     ll org2=0;
    //     if(v[j]==v[j+1]) org2++;
    //     // purber orgiginal er sathe kome kina
    //     ll purberorgiginal=dp[i-1][0]+org+org2;
    //     // purber change er sathe kome kina
    //     ll purbechange=dp[i-1][1]+org;
    //     if(v[j]==v[i-1]) purbechange++;
    //     dp[i][0]=min(purberorgiginal,purbechange);
    //     // current change;
    //     ll cng=0,cng1=0;
    //     if(i<j-1){
    //     if(v[j]==v[i+1]) cng++;
    //     }
    //     else if(v[i]==v[j]) cng++;
        
    //     if(v[i]==v[j+1]) cng1++;
        
    //     //cerr<<"c "<<cng<<' '<<cng1<<' ';
    //     //purbe orgiginal er sathe
    //     ll purbeorg=dp[i-1][0]+cng+cng1;
    //     if(v[j]==v[i-1])purbeorg++;
    //     if(v[i-1]==v[i])purbeorg--;
    //      purbechange=dp[i-1][1];
    //      if(v[i]==v[i-1]) purbechange++;
    //      if(v[j]==v[i+1]) purbechange++;
    //      purbechange-cng1;
         
    //     if(v[j]==v[i-1]) purbechange++;
    //     if(v[j+1]!=v[j]&&v[j+1]==v[i]) purbechange--;
    //     dp[i][1]=min(purbechange,purbeorg);
    //     ans=min(dp[i][0],dp[i][1]);
    //    // cerr<<dp[i][0]<<' '<<dp[i][1]<<endl;
    //     i++;
    //     j--;




    // }
    // if(i==j){
    //     ll purbeorg=dp[i-1][0];
    //     ll purbecng=dp[i-1][1];
    //     //purbe org
    //     if(v[i]==v[i+1]) purbeorg++;
    //     //purbe change
    //     if(v[i]==v[i-1]) purbecng++;
    //     ans=min(purbecng,purbeorg);

    // }
    // cout<<ans<<endl;

  

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
