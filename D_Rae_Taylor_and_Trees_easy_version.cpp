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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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

vector<vector<ll>>g(N);
void solve()
{
    ll n;
    cin >> n;
    vc(v,n);
    itr(i,n) cin >> v[i];
for(int i=0;i<=n+5;i++) g[i].clear();
   ll mx=v[n-1];
   vc(mn,n+4);
   mn[0]=v[0];
  vector<ll>sig;
   for(int i=1;i<n;i++) mn[i]=min(mn[i-1],v[i]);
   vc(mxind,n+1);
   mxind[n-1]=n-1;
   sig.push_back(n-1);
   for(int i=n-2;i>=0;i--){
    if(mx<v[i]){
        mxind[i]=i;
        mx=v[i];
        sig.push_back(i);
    }
    else {
        mxind[i]=mxind[i+1];
    }
   }
  // for(auto x:sig) cerr<<x<<' ';
  // cerr<<endl;
   ll i=0;
  ll j=mxind[0];
   
   while(i<n){
    ll a=v[i];
    ll b=v[mxind[i]];
    if(a!=b){
    g[a].push_back(b);
    g[b].push_back(a);
    }
    i++;
   }
   srt(sig);
   bool f=0;
    j=sig.size()-1;
    //cerr<<j<<endl;
   while(j>0){

    ll age=sig[j-1];
    //cerr<<"age "<<age<<endl;
    ll mnv=mn[age];
    //cerr<<mnv<<' '<<v[sig[j]]<<endl;
    if(v[sig[j]]<mnv){
        f=1;
        break;

    }
    else{
       ll a=v[sig[j]];
       ll b=mnv;
        if(a!=b){
        g[a].push_back(b);
        g[b].push_back(a);
        }
    }
    j--;


   }
   if(f) no;
   else yes;


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
