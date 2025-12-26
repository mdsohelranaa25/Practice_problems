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
  ll cnt=0,purbe=0;
  ll y=0;
  vector<ll>dp(1e6,0);
  vector<pair<ll,ll>>ans;
  dp[0]=1;
  ans.push_back({0,y});
  for(int i=1;i<=1e8;i++){
    
    if(cnt==n) break;
    else if(cnt+dp[i-1]<=n){
        cnt+=dp[i-1];
        dp[i]=dp[i-1]+1;
        ans.push_back({i,y});
    }
    else{
        y+=10;
       
        i+=10;
         dp[i]=1;
        ans.push_back({i,y});


    }

    

  }
  cerr<<cnt<<endl;
  cout<<ans.size()<<endl;
  for(auto x:ans) cout<<x.f<<' '<<x.sc<<endl;

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
