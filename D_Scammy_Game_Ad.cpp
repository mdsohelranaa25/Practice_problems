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
#define int long long


void solve()
{
    ll n;
    cin>>n;
    vector<vector<int>>dp(n+5,vector<int>(2,0));
    int ret=0;
    dp[0][0]=1,dp[0][1]=1;
    ll prev=0;
    for(int i=1;i<=n;i++){
        ret=0;
        int rett=0;
        int a,b;
        char c,cc;
        cin>>c>>a>>cc>>b;
      //  cerr<<"s ";
        //cerr<<c<<' '<<a<< ' '<<cc<<' '<<b<<endl;
        ll aa=dp[i-1][0];
        int bb=dp[i-1][1];
        int ta=aa+prev;
        int tb=bb;
        if(c=='+') ret+=a;
        else ret+=ta*(a-1);
        if(cc=='+') ret+=b;
        else ret+=tb*(b-1);
        ta=aa;
        tb=bb+prev;
        if(c=='+') rett+=a;
        else rett+=ta*(a-1);
        if(cc=='+') rett+=b;
        else rett+=tb*(b-1);
        if(ret>rett) {
           
            dp[i][0]=aa+prev;
            dp[i][1]=bb;
            prev=ret;
        }
        else if(ret<rett){
            
            dp[i][0]=aa;
            dp[i][1]=bb+prev;
            prev=rett;

        }
        else {
            dp[i][0]=aa;
            dp[i][1]=bb;
            prev+=rett;
        }




    }
    cout<<dp[n][0]+dp[n][1]+prev<<endl;
  

}
int32_t main()
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
