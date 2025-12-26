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

  ll n;cin>>n;
  vc(v,n);
  itr(i,n) cin>>v[i];
  map<ll,ll>mp;
  ll ans=0;
  ll cnt=0;
  ll nowcnt=0;
  ll cur=0;
    ll dp[n+5]={0};
    for(int i=0;i<n;i++){
        cur++;
        if(mp.find(v[i])==mp.end()){mp[v[i]]=i;
            dp[i]=cur;
        }
        else{
           // cerr<<i<<' '<<v[i]<<" "<<mp[v[i]]<<endl;
           
            ll purbe=dp[mp[v[i]]];
            ll pore=n-i;
            ans+=purbe*pore;
            dp[i]=purbe+cur;
            mp[v[i]]=i;
        }
        //cerr<<i<<' '<<ans<<endl;
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
