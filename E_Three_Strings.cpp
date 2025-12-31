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

  
string s,ss;
cin>>s>>ss;
string c;
cin>>c;

ll n=s.size();
ll m=ss.size();
vector<vector<ll>>dp(n+5,vector<ll>(m+5,1e9));
dp[0][0]=0;
//cerr<<"x"<<endl;
for(int i=0;i<c.size();i++){
    ll z=i+1;
    for(int j=0;j<=z;j++){
        ll pore=z-j;
        if(pore>m) continue;;
        if(j>n) continue;;
        ll ekhon=1e9;
        if(j>0){
            ekhon=dp[j-1][pore];
            if(s[j-1]!=c[i]) ekhon++;
        }
        if(pore>0){
            ll ekhonn=dp[j][pore-1];
            if(ss[pore-1]!=c[i]) ekhonn++;
            ekhon=min(ekhon,ekhonn);
        }
        dp[j][pore]=min(dp[j][pore],ekhon);
        //cerr<<dp[j][pore]<< ' '<<j<<' '<<pore<<endl;
        //cerr<<
    }
}
//cerr<<"x"<<endl;
cout<<dp[n][m]<<endl;


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
