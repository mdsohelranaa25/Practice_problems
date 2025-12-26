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

ll ts=0;
void solve()
{
    ts++;

  ll n;
  cin>>n;
  vector<vector<ll>>v(2,vector<ll>(n+1,0));
  itr(i,2){
    itr(j,n) cin>>v[i][j];
  }
  vector<pair<ll,ll>>sec(n+1),fir(n+1);
  ll mn=v[1][n-1];
  ll mx=mn;
  sec[n]={mn,mx};
  for(int i=n-1;i>=0;i--){
    mn=min(mn,v[1][i]);
    mx=max(mx,v[1][i]);
    sec[i+1]={mn,mx};

    
  }
  ll pwmn=-1,pwmx=-1;
  mn=v[0][0];
  mx=mn;
  fir[1]={mn,mx};
  ll ans=0;
  ll now=0;
  ll mnmx=0;
  ll mxmn=max(v[0][0],sec[1].second);
  for(int i=0;i<n;i++){
    mn=min(mn,v[0][i]);
    mx=max(mx,v[0][i]);
    ll totmin=min(mn,sec[i+1].first);
    ll totmx=max(mx,sec[i+1].sc);
   // cerr<<"tt "<<totmin<<' '<<totmx<<endl;
    ll pore=2*n-totmx+1;
    ll age=totmin;
    //cerr<<"age "<<age<<' '<<pore<<endl;
    //<<"mnmx "<<mnmx<<' '<<mxmn<<endl;
    if(totmin>mnmx){
        ll edike=totmin-mnmx;
        mnmx=totmin;
        //cerr<<edike*pore<<' ';
        ans+=edike*pore;
    }
    if(totmx<mxmn){
        ll odike=mxmn-totmx;
        mxmn=totmx;
        //cerr<<age*odike<<endl;
        ans+=age*odike;
    }
   // cerr<<mn<<' '<<mx<<' '<<totmin<<' '<<totmx<<endl;
    
   // ans=max(ans,now);



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
