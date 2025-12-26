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

  ll n,m;
  cin>>n>>m;
  vector<ll>colm(m+1);
  vector<vector<ll>>v(n+1,vector<ll>(m+1,0));
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>v[i][j];
        if(v[i][j]==1){
            colm[j]=i;
        }
    }

  }
  //for(int i=1;i<=m;i++) cerr<<colm[i]<<' ';
  //cerr<<endl;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(colm[j]>=i){
            v[i][j]=colm[j]-i;
        }
        else v[i][j]=i-colm[j];
      //  cerr<<v[i][j]<<' ';
    }
    //cerr<<endl;
}
ll now=0;
for(int j=m-1;j>=1;j--){
   
    for(int i=1;i<=n;i++){
        now=v[i][j];
        ll extra=v[i][j+1];
        if(i>1) extra=min(extra,v[i-1][j+1]);
        if(i<n) extra=min(extra,v[i+1][j+1]);
        v[i][j]=now+extra;
       // cerr<<i<<' '<<j<<' '<<v[i][j]<<' '<<now<<' '<<extra<<endl;
        
        
    }
}
ll ans=INT_MAX;
for(int i=1;i<=n;i++) ans=min(ans,v[i][1]);
cout<<ans<<endl;



}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
 // tt
  {
    solve();
  }
}
